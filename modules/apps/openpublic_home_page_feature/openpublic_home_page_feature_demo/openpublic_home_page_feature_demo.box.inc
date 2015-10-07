<?php
/**
 * @file
 * openpublic_home_page_feature_demo.box.inc
 */

/**
 * Implements hook_default_box().
 */
function openpublic_home_page_feature_demo_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-dc4059cc';
  $box->plugin_key = 'feature';
  $box->title = '';
  $box->description = 'default home page block';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_feature_slides' => array(
      'und' => array(
        0 => array(
          'field_feature_slides_body' => array(
            'und' => array(
              0 => array(
                'value' => 'We repair and service any PC or Laptop cleaning & greatly improving performance.',
                'format' => NULL,
                'safe_value' => 'We repair and service any PC or Laptop cleaning & greatly improving performance.',
              ),
            ),
          ),
          'field_feature_slides_image' => array(
            'und' => array(
              0 => array(
                'filename' => 'computerfix.jpg',
                'uri' => 'public://computerfix.jpg',
                'status' => '1',
                'rdf_mapping' => array(),
                'alt' => NULL,
                'title' => NULL,
              ),
            ),
          ),
          'field_feature_slides_title' => array(
            'und' => array(
              0 => array(
                'value' => 'PC/Laptop Service & Repair',
                'format' => NULL,
                'safe_value' => 'PC/Laptop Service & Repair',
              ),
            ),
          ),
          'field_feature_slides_url' => array(
            'und' => array(
              0 => array(
                'url' => 'http://www.introsec.ca/residential',
                'title' => NULL,
                'attributes' => array(),
              ),
            ),
          ),
        ),
        1 => array(
          'field_feature_slides_body' => array(
            'und' => array(
              0 => array(
                'value' => 'We take care or virus and malware removal leaving your PC clean and feeling better.',
                'format' => NULL,
                'safe_value' => 'We take care or virus and malware removal leaving your PC clean and feeling better.',
              ),
            ),
          ),
          'field_feature_slides_image' => array(
            'und' => array(
              0 => array(
                'filename' => 'virus_protection.jpg',
                'uri' => 'public://virus_protection.jpg',
                'status' => '1',
                'rdf_mapping' => array(),
                'alt' => NULL,
                'title' => NULL,
              ),
            ),
          ),
          'field_feature_slides_title' => array(
            'und' => array(
              0 => array(
                'value' => 'Virus & Malware Removal',
                'format' => NULL,
                'safe_value' => 'Virus & Malware Removal',
              ),
            ),
          ),
          'field_feature_slides_url' => array(
            'und' => array(
              0 => array(
                'url' => 'https://www.introsec.ca/residential',
                'title' => NULL,
                'attributes' => array(),
              ),
            ),
          ),
        ),
        2 => array(
          'field_feature_slides_body' => array(
            'und' => array(
              0 => array(
                'value' => 'We install and configure small/mid size networks as well as terminate cable ends',
                'format' => NULL,
                'safe_value' => 'We install and configure small/mid size networks as well as terminate cable ends',
              ),
            ),
          ),
          'field_feature_slides_image' => array(
            'und' => array(
              0 => array(
                'filename' => 'networking.jpg',
                'uri' => 'public://networking.jpg',
                'status' => '1',
                'rdf_mapping' => array(),
                'alt' => NULL,
                'title' => NULL,
              ),
            ),
          ),
          'field_feature_slides_title' => array(
            'und' => array(
              0 => array(
                'value' => 'Network Installation & Termination',
                'format' => NULL,
                'safe_value' => 'Network Installation & Termination',
              ),
            ),
          ),
          'field_feature_slides_url' => array(
            'und' => array(
              0 => array(
                'url' => 'https://www.introsec.ca/residential',
                'title' => NULL,
                'attributes' => array(),
              ),
            ),
          ),          
        ),
      ),
    ),
  );
  $export['box-dc4059cc'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-e826276f';
  $box->plugin_key = 'carousel';
  $box->title = '';
  $box->description = 'Default home page carousel';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_carousel_slides' => array(
      'und' => array(
        0 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'pc_repair',
              ),
            ),
          ),
        ),
        1 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'virus_removal',
              ),
            ),
          ),
        ),
        2 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'networking_services',
              ),
            ),
          ),
        ), 
       ),
    ),
  );
  $export['box-e826276f'] = $box;

  return $export;
}
