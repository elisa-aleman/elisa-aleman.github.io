---
layout: en_default
title: Personal Blog
lang: en
lang-ref: blog
---

# Personal Blog

Welcome to my blog!

<div id="toc_container">
    <p class="toc_title">Latest Posts</p>
    <ul id="toc_list">
        {% assign posts_list = site.posts | where:"lang", page.lang %}
        {% assign newest = true %}
        {% for post in posts_list limit:5 %}
            <li>
                <h3 style="font-size: 0.8em; margin-bottom:-0.5em;">
                    <a href="{{ post.url }}">
                        {% if newest == true %}
                            <div id="newest_post_banner"> ★New</div>
                            {% assign newest = false %}
                        {% endif %}
                    </a>
                    <a href="{{ post.url }}">{{ post.date | date:'%Y/%m/%d (%a)' }} - {{ post.title }}
                    </a>
                </h3>
                <div style="font-size: 0.7em; margin-bottom:-0.5em;">{{ post.excerpt }}</div>
            </li>
        {% endfor %}
    </ul>
<div class="nav-buttons" style="font-size = 0.7em; width: 20em; float: left;">
    <div class="nav-btn" style="border:0;"><a href="/{{page.lang}}/blog/blog_archive"> Blog archive </a></div>
</div>

</div>
