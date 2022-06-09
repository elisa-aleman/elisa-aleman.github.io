---
layout: jp_default
title: Personal Blog
lang: jp
lang-ref: blog
---

# ブログ

私のブログへようこそ!

<div id="toc_container">
    <p class="toc_title">最近の投稿</p>
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
    <div class="nav-btn" style="border:0;"><a href="/{{page.lang}}/blog/blog_archive"> 全投稿履歴 </a></div>
</div>

</div>
