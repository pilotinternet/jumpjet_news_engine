<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function jumpjet_news_engine_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jumpjet_section_news';
  $context->description = 'Active when the user is in the News section';
  $context->tag = 'Section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
    'node' => array(
      'values' => array(
        'jumpjet_news' => 'jumpjet_news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/*' => 'news/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'jumpjet_news:jumpjet_news_view_page1' => 'jumpjet_news:jumpjet_news_view_page1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8d851d5a44816b0e1b681cffa2345643' => array(
          'module' => 'views',
          'delta' => '8d851d5a44816b0e1b681cffa2345643',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the user is in the News section');
  t('Section');

  $export['jumpjet_section_news'] = $context;
  return $export;
}
