<div class="sidebar">
<h2><$MTTrans phrase="Categories"$></h2>

<ul>
<MTCategories>
<MTBlogIfArchives archive_type="Category">
<li><a href="<$MTCategoryArchiveLink$>"><$MTCategoryLabel$></a></li>
<MTElse>
<li><$MTCategoryLabel$></li>
</MTElse>
</MTBlogIfArchives>
</MTCategories>
</ul>
<div class="bottomShimL">&nbsp;</div>
<MTBlogIfArchives>
<h2><$MTTrans phrase="Recent Posts"$></h2>
<ul>
<MTEntries lastn="10">
<li><a href="<$MTEntryPermalink$>"><$MTEntryTitle remove_html="1" generate="1"$></a></li>
</MTEntries>
</ul>
<div class="bottomShimL">&nbsp;</div>
</MTBlogIfArchives>
<div class="link-note">
<$MTUserEmail$>
</div>
<div class="bottomShimL">&nbsp;</div>
<h2><a href="<$MTUserSiteURL$>about.html"><$MTTrans phrase="About"$></a></h2>
<div class="bottomShimL">&nbsp;</div>

</div>