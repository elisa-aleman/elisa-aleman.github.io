---
layout: jp_default
title: 全ブログ投稿履歴
lang: jp
lang-ref: blog/blog_archive
---

# 全ブログ投稿履歴

<div id="toc_container">
	<div class="nav-buttons" style="font-size = 0.7em; width: 20em; float: left;">
		<div class="nav-btn" style="border:0;"><a href="/{{page.lang}}/blog"> ブログのメインページに戻る </a></div>
	</div><br><br>
	<ul id="toc_list">
		{% assign posts_list = site.posts | where:"lang", page.lang %}
	  	{% for post in posts_list %}
	  		{% assign currentyear = post.date | date: "%Y" %}
	  		{% if currentyear != year %}
	  			<li id="y{{currentyear}}"><h2>{{ currentyear }}年</h2></li>
	    		{% assign year = currentyear %}
    		{% endif %}
	  		{% assign currentmonth = post.date | date: "%Y年%m月" %}
		  	{% if currentmonth != date %}
	  			<li id="y{{currentmonth}}"><h3 style="font-size: 0.9em">{{ currentmonth }}</h3></li>
	    		{% assign date = currentmonth %}
    		{% endif %}
	    	<li>
	      		<h4 style="font-size: 0.8em">
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
	      		</h4>
	      		<div style="font-size: 0.7em">{{ post.excerpt }}</div>
	    	</li>
	  	{% endfor %}
	</ul>
</div>