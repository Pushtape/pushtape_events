<?php
/**
 * @file
 * pushtape_events_democontent.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pushtape_events_democontent_content_defaults() {
  $content = array();

  $content['pushtape-events-defaultcontent-1'] = (object) array(
    'exported_path' => 'content/hollywood-bowl',
    'title' => 'Hollywood Bowl',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011280',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-1',
    'body' => array(),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2015-01-02 02:00:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
        1 => array(
          'tid' => '2',
        ),
        2 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-2'] = (object) array(
    'exported_path' => 'content/store-ameoba-records',
    'title' => 'In store at Ameoba Records',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011280',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-2',
    'body' => array(),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2010-02-02 01:15:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
        1 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-3'] = (object) array(
    'exported_path' => 'content/university-california-berkeley',
    'title' => 'University of California at Berkeley',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011280',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-3',
    'body' => array(),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-02-02 02:30:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
        1 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-4'] = (object) array(
    'exported_path' => 'content/kcrw-morning-becomes-eclectic',
    'title' => 'KCRW Morning Becomes Eclectic',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011220',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-4',
    'body' => array(),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2015-09-15 01:15:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-5'] = (object) array(
    'exported_path' => 'content/mint',
    'title' => 'The Mint',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011220',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-5',
    'body' => array(),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2010-05-04 13:30:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
        1 => array(
          'tid' => '2',
        ),
        2 => array(
          'tid' => '3',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-6'] = (object) array(
    'exported_path' => 'content/stanford-university',
    'title' => 'Stanford University',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011160',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-6',
    'body' => array(),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2014-01-02 01:15:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
      ),
    ),
  );

return $content;
}
