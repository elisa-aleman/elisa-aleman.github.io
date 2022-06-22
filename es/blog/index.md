---
layout: es_default
title: Blog Personal
lang: es
lang-ref: blog
---

# Blog Personal

Bienvenidos a mi blog! Aquí planeo postear sobre asuntos sociales en contextos en los que puedo dar cierta perspectiva a diferentes lugares de trabajo. Por ejemplo, podría yo escribir sobre temas queer en general, temas queer en Japón, temas queer en lugares de trabajo de ingeniería en Japón, etc. También escribiré sobre accesibilidad en ingeniería, así como otros temas de diversidad e inclusión, con el punto de vista específico que tengo como extranjera queer neurodivergente trabajando de ingeniera y viviendo en Japón. En ocasiones puede que simplemente dirija su atención a otros artículos que haya encontrado, dando mi punto de vista (aunque es difícil mantener el elemento multilingüe de mi blog intacto). Pueden [leer más sobre mis motivaciones aquí](/{{page.lang}}/2022/06/20/first-blog.html).

También publicaré, de vez en cuando, guías o comentarios de herramientas de ingeniería o programación que haya escrito para solucionar problemas que encontré en el pasado. Usualmente involucrará Python, LaTeX, Markdown, Shell, o problemas específicos del SO, muchas veces teniendo que ver con mi necesidad de usar Japonés en ciertos documentos.

Espero no solo que disfruten leer mis posts, sino también que los encuentren apropiados para compartir en sus lugares de trabajo ya sea académicos o empresariales para lograr hacer esos lugares más inclusivos y cómodos para todes.

Abajo encontrarán una lista de mis posts más recientes, y aquí hay un link al [Archivo del Blog](/{{page.lang}}/blog/blog_archive) para que puedan ver todo el historial de contenido.

<div id="toc_container">
    <p class="toc_title">Últimos Posts</p>
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
    <div class="nav-btn" style="border:0;"><a href="/{{page.lang}}/blog/blog_archive"> Archivo del Blog </a></div>
</div>

</div>
