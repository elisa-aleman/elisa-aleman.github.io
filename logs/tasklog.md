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

- Download app Data Jar