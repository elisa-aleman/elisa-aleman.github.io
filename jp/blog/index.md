---
layout: jp_default
title: ブログ
lang: jp
lang-ref: blog
---

# ブログ

私のブログへようおこし！ここでは自分が貢献できる立場と観点から職場に社会的な問題や話題に光を照らすことを目的として書こうと思っています。例えばクィアー（LGBT＋）の話題を全般に書いたり、日本におけるクィアーの話題を書いたり、エンジニアリングの日本の業界でのクィアーの話題を書いたり、それそれしようと思っています。さらにエンジニアリングにおけるアクセシビリティや、ダイバーシティとインクルージョンに関する話題も、私が外国人のクィアーのニューロダイバージェントの日本に住んで働いているエンジニアーの観点から書けることを書きます。たまに他で見つけたいい記事も参照したり、それについての意見を述べたりもすると思います（が、それは本ブログの多言語の対応が難しくなる）。[ここで私の動機について読むことができます](/{{page.lang}}/2022/06/20/first-blog.html)。

そして、時に見つかったツールやガイド、以前あった問題の解決法などを書くことがあると思います。よく使う Python, LaTeX, Markdown, Shell,やOSの問題解決、特に日本語の入力や出力に困ったことが多いのでそれについて書くかもしれません。

私の記事が読者からみて面白くあるよう、そして研究所や会社にシェアーして皆がより居心地よく居られるよう期待しています。どうぞお楽しみください。

以下に最新の投稿のリストがありますが、ここにも [全ブログ投稿履歴](/{{page.lang}}/blog/blog_archive) がご覧できます。

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
                            <div id="newest_post_banner"> ★新</div>
                            {% assign newest = false %}
                        {% endif %}
                    </a>
                    {% assign jpa = post.date | date: "%a" %}
                    <a href="{{ post.url }}">
                        {{ post.date | date:'%Y年%m月%d日' }}
                            (
                        {% case jpa %}
                          {% when "Mon" %}月
                          {% when "Tue" %}火
                          {% when "Wed" %}水
                          {% when "Thu" %}木
                          {% when "Fri" %}金
                          {% when "Sat" %}土
                          {% when "Sun" %}日
                          {% else %}{{ jpa }}
                          {% endcase %}
                            ) - {{ post.title }}
                    </a>
                </h3>
                <div style="font-size: 0.7em; margin-bottom:-0.5em;">{{ post.excerpt }}</div>
            </li>
        {% endfor %}
    </ul>
<div class="nav-buttons" style="font-size = 0.7em; width: 20em; float: left;">
    <div class="nav-btn" style="border:0;"><a href="/{{page.lang}}/blog/blog_archive"> 全ブログ投稿履歴 </a></div>
</div>

</div>
