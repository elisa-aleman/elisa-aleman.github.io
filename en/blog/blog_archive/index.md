---
layout: en_default
title: Blog Archive
lang: en
lang-ref: blog/blog_archive
---

# Blog Archive

<div id="toc_container">
	<div class="nav-buttons" style="font-size = 0.7em; width: 20em; float: left;">
		<div class="nav-btn" style="border:0;"><a href="/{{page.lang}}/blog"> Return to the Blog home page </a></div>
	</div><br><br>
	<ul id="toc_list">
		{% assign posts_list = site.posts | where:"lang", page.lang %}
	  	{% for post in posts_list %}
	  		{% assign currentyear = post.date | date: "%Y" %}
	  		{% if currentyear != year %}
	  			<li id="y{{currentyear}}"><h2>{{ currentyear }}</h2></li>
	    		{% assign year = currentyear %}
    		{% endif %}
	  		{% assign currentmonth = post.date | date: "%B %Y" %}
		  	{% if currentmonth != date %}
	  			<li id="y{{currentmonth}}"><h3 style="font-size: 0.9em">{{ currentmonth }}</h3></li>
	    		{% assign date = currentmonth %}
    		{% endif %}
	    	<li>
	      		<h4 style="font-size: 0.8em"><a href="{{ post.url }}">{{ post.date | date:'%Y/%m/%d (%a)' }} - {{ post.title }}</a></h4>
	      			<div style="font-size: 0.7em">{{ post.excerpt }}</div>
	    	</li>
	  	{% endfor %}
	</ul>
</div>