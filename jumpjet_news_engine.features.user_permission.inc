<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jumpjet_news_engine_user_default_permissions() {
  $permissions = array();

  // Exported permission: create jumpjet_news content
  $permissions['create jumpjet_news content'] = array(
    'name' => 'create jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'site manager',
    ),
  );

  // Exported permission: delete any jumpjet_news content
  $permissions['delete any jumpjet_news content'] = array(
    'name' => 'delete any jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: delete own jumpjet_news content
  $permissions['delete own jumpjet_news content'] = array(
    'name' => 'delete own jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'community moderator',
      '4' => 'site manager',
    ),
  );

  // Exported permission: edit any jumpjet_news content
  $permissions['edit any jumpjet_news content'] = array(
    'name' => 'edit any jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community moderator',
      '3' => 'community manager',
      '4' => 'site manager',
    ),
  );

  // Exported permission: edit own jumpjet_news content
  $permissions['edit own jumpjet_news content'] = array(
    'name' => 'edit own jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'community moderator',
      '4' => 'site manager',
    ),
  );

  // Exported permission: publish any jumpjet_news content
  $permissions['publish any jumpjet_news content'] = array(
    'name' => 'publish any jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: publish own jumpjet_news content
  $permissions['publish own jumpjet_news content'] = array(
    'name' => 'publish own jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community moderator',
      '3' => 'site manager',
    ),
  );

  // Exported permission: unpublish any jumpjet_news content
  $permissions['unpublish any jumpjet_news content'] = array(
    'name' => 'unpublish any jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community moderator',
      '3' => 'community manager',
      '4' => 'site manager',
    ),
  );

  // Exported permission: unpublish own jumpjet_news content
  $permissions['unpublish own jumpjet_news content'] = array(
    'name' => 'unpublish own jumpjet_news content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'community moderator',
      '4' => 'site manager',
    ),
  );

  return $permissions;
}
