<div id="node-<?php print $node->nid; ?>" class="sh-blog-teaser node-blog <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="blog-wrap">
        <div class="blog-head">  
            <div class="bog-title">
                <?php print render($title_prefix); ?>
                    <?php if (!$page): ?>
                        <h2 class="blog-content-tile" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
                    <?php endif; ?>
                <?php print render($title_suffix); ?>
            </div>  
            <div class="blog-meta">
                <span class="blog-date"><i class="fa fa-clock-o"></i><?php print format_date($created,'custom','M d, Y');?></span>
                <span class="blog-author"><i class="fa fa-user"></i><span>By</span> <?php print $name; ?></span>
                <span class="blog-comment"><i class="fa fa-comment"></i><span> <?php print $comment_count; ?> Comments </span></span>
					 <span class="blog-tags"><i class="fa fa-file"></i> <?php print render($content['field_tags']);?></span>
            </div>            
            <div class="blog-image clearfix">
                <?php print render($content['field_media']);?>
            </div>
        </div>  

        <div class="blog-main-content">
            <div class="blog-content content"<?php print $content_attributes; ?>>
                <?php print render($content['body']);?>
            </div>
            <?php print render($content['links']); ?>
            <?php print render($content['comments']); ?>
        </div>
    </div>
</div>