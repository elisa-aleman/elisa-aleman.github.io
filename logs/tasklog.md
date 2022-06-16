# Tasklog

## 2022-06-13 Making a Multilingual Blog

https://forestry.io/blog/creating-a-multilingual-blog-with-jekyll/

## 2022-06-14 Making a list of recent posts



## 2022-06-16 Scheduling future posts

https://www.thoughtasylum.com/2020/05/27/github-pages-post-scheduling/

https://alxmjo.com/2017/05/30/how-to-schedule-posts-with-jekyll/

### Making drafts

https://jekyllrb.com/docs/posts/

### Setting a timezone

Add to `_config.yml`

```
#Publishing defaults
show_drafts: false
future: false
timezone: Asia/Tokyo
```

Although this needed me to install a gem called `tzinfo` and its data pack for timezones

```
bundle add tzinfo tzinfo-data
bundle install
```

And then:

### Seeing drafts in dev mode

Make a `_config_dev.yml` file with future and drafts on, so we can see them.

```
bundle exec jekyll serve --config _config.yml,_config_dev.yml --incremental
```

This allowed me to see the future posts.

Whenever I want to see what it runs on GitHub Pages after deployment, I just run

```
bundle exec jekyll serve
```

### Make a token and a rebuild shell script to run in cron, etc:

Make a token first, mark `user` and `repo`.

https://github.com/settings/tokens

Copy it into a password manager, etc. Then make a script to call by cron later on:

```
#!/bin/bash

curl "https://api.github.com/repos/elisa-aleman/elisa-aleman.github.io/pages/builds" \
-X POST \
-H "Authorization: token {MY_TOKEN}" \
-H "Accept: application/vnd.github.mister-fantastic-preview"
```

Personally, I like the idea of running it via shortcuts in my iPhone.

### Make an iPhone Shortcut

In the Data Jar app:

1. Download app Data Jar
2. Make a new Dictionary, key: `elisa-aleman-blog-rebuild` (no periods or it throws error)
3. Once inside the dictionary, add new value `token` and fill in the token info
4. Make a `url` value and add `https://api.github.com/repos/elisa-aleman/elisa-aleman.github.io/pages/builds`
5. Make a `accept` value and add `application/vnd.github.mister-fantastic-preview`

In the Shortcuts app

1. Go to automations tab
2. Make a new automation
3. Set it to everyday at 9:00
4. Search for apps, tap on Data Jar
5. Choose "Get value for...", and type the key you made for the dictionary. In my case it's \[`elisa-aleman-blog-rebuild`\]
6. Search for apps, type `contents`, tap "Get contents of ..." in Web
7. On the value for "Get contents for", tap "Select Variable" on the bottom of the screen
8. You can rename the variable as `rebuild-dict`
9. Select the output of the first "Get value for..." section.
10. Tap on the variable and define it as a Dictionary (the default says file)
11. At the bottom of the variable screen a "key" section should appear, type `url`
12. Method: POST
13. Headers, add new header. 
14. Type in Key: `Authorization`
15. Type in text: `token ` with the space
16. Still in the text area, tap on "Select Variable", choose `rebuild-dict`
17. Define it as dictionary and in the key section type `token`
18. Headers, add new header.
19. Type in Key: `Accept`
20. In the text area, tap on "Select Variable", and again choose `rebuild-dict`
21. Define it as a dictionary and in the key section type `accept`
22. Search for apps, search for "Show Notification"
23. Add Notification text as you like
