<div class="sidebar">
<div id="calendar">
<table summary="<$MTTrans phrase="Monthly calendar with links to each day's posts"$>">
<caption><$MTDate format="%B %Y"$></caption>
<tr>
<MTCalendarWeekDays>
<th><$MTCalendarWeekDay$></th>
</MTCalendarWeekDays>
</tr>

<MTCalendar>
<MTCalendarWeekHeader><tr></MTCalendarWeekHeader>

<td><MTCalendarIfEntries><MTEntries lastn="1"><a href="<$MTEntryPermalink$>"><$MTCalendarDay$></a></MTEntries></MTCalendarIfEntries><MTCalendarIfNoEntries><$MTCalendarDay$></MTCalendarIfNoEntries><MTCalendarIfBlank>&nbsp;</MTCalendarIfBlank></td><MTCalendarWeekFooter></tr></MTCalendarWeekFooter>
</MTCalendar>
</table>
</div>
<div class="bottomShimR">&nbsp;</div>
<MTBlogIfArchives>
<h2><a href="<$MTBlogURL$>archives.html"><$MTTrans phrase="Archives"$></a></h2>
<ul>
<MTArchiveList best_archive_type="1" lastn="10">
<li><a href="<$MTArchiveLink$>"><$MTArchiveTitle$></a></li>
</MTArchiveList>
</ul>
</MTBlogIfArchives>
<div class="bottomShimR">&nbsp;</div>
<div class="link-note">
<a onclick="window.open(this.href, 'blogroll', 'width=500,height=600,scrollbars=yes'); return false;" href="<$MTCGIPath$><$MTAppScript$>/lists?__mode=quickpost&amp;is_qp=1&amp;type=1&amp;qp_href=<$MTBlogURL encode_url="1"$>"><$MTTrans phrase="Add me to your TypePad People list"$></a>
</div>
<div class="bottomShimR">&nbsp;</div>
<div class="link-note">
<a href="<$MTBlogURL$>index.rdf"><$MTTrans phrase="Syndicate this site (XML)"$></a>
</div>
<div class="bottomShimR">&nbsp;</div>

</div>