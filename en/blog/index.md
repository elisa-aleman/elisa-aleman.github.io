---
layout: en_default
title: Personal Blog
lang: en
lang-ref: blog
---

# Personal Blog

Welcome to my blog! Here I plan to post about social matters in the contexts where I can bring some light to different workplaces. For example, I might write about queer issues in general, queer issues in Japan, or queer issues in engineering workplaces in Japan, and so on. I will also be writing about accessibility in engineering, as well as other topics about diversity and inclusion, with the specific point of view that I have as a queer foreign neurodiverse engineer living and working in Japan. I might also just point to other good articles I might find, while giving my point of view (although it'd be difficult to keep the multilingual aspect of the blog intact). You can [read more about my motivations here](/{{page.lang}}/2022/06/20/first-blog.html).

I will also, from time to time, write about nifty engineering tools or guides that I have written for specific problems I have run in the past. Usually it will involve Python, LaTeX, Markdown, Shell, or OS specific problems, most of the time also having to do with me needing to use Japanese in some of these documents. 

I hope not only that you enjoy reading my posts, but that you may find them appropriate to share in your academic or business workplaces to make a more inclusive space where everyone can feel comfortable.

Below there's a list of my latest posts, and here's a link to the [Blog Archive](/{{page.lang}}/blog/blog_archive) for all the posting history.

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
