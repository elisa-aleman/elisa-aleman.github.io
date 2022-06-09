(?# To find all titles with links in them.)
(#{1,}) \[(.*?)\]\((.*?)\)

(?# Replace with the proper anchor format for markdown in HTML)
<a id="$3"></a>\n$1 $2