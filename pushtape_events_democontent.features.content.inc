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
    'exported_path' => 'shows/hollywood-bowl',
    'title' => 'Hollywood Bowl',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011280',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Bitter melon chrysanthemum leaves cabbage tarwi. Potato, bitter gourd moth bean bok choy, brussels sprout shallot drumstick kurrat cabbage orache. Jerusalem artichoke garden rocket pigeon pea lizard\'s tail good king henry tomatillo. Lotus root american groundnut mung bean - yarrow shallot pak choy soko skirret hamburg parsley cabbage spinach.</p><p>Celtuce soybean good king henry drumstick jícama swede? Leek swiss chard prussian asparagus, sorrel shallot lizard\'s tail, broccoli rabe sweet potato or kumara fluted pumpkin daikon. Chinese cabbage, cabbage; good king henry nopal; greater plantain peanut cassava guar kuka, lamb\'s lettuce.</p><p>Kale american groundnut chard radish ulluco lima bean; jícama yam sweet corn aka corn; aka maize lettuce bamboo shoot? Peanut chickweed, ceylon spinach lima bean; chinese cabbage. Arugula celtuce sweet potato or kumara ahipa miner\'s lettuce pignut, garden rocket ensete okra canna leaves mizuna greens.</p><p>Pumpkin, tigernut aubergine tarwi. Fat hen brinjal ulluco corn salad sorrel carrot tomato horseradish. Jícama sea kale spinach canna bamboo shoot, golden samphire; squash garden rocket, plectranthus chicory celery spinach winter melon. Kale ahipa good king henry garden rocket.</p><p>Pigeon pea chinese mallow - land cress? Samphire yacón, earthnut pea dolichos bean. Bok choy corn salad wild leek camas spinach chinese mallow. Collard greens tinda chickweed chinese cabbage - avocado; pumpkin eggplant beet greens. Prairie turnip bitterleaf velvet bean beet greens lotus root winter purslane tatsoi - polk.</p><p>Photo Credit:&nbsp;http://www.flickr.com/photos/baia/</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Bitter melon chrysanthemum leaves cabbage tarwi. Potato, bitter gourd moth bean bok choy, brussels sprout shallot drumstick kurrat cabbage orache. Jerusalem artichoke garden rocket pigeon pea lizard\'s tail good king henry tomatillo. Lotus root american groundnut mung bean - yarrow shallot pak choy soko skirret hamburg parsley cabbage spinach.</p>
<p>Celtuce soybean good king henry drumstick jícama swede? Leek swiss chard prussian asparagus, sorrel shallot lizard\'s tail, broccoli rabe sweet potato or kumara fluted pumpkin daikon. Chinese cabbage, cabbage; good king henry nopal; greater plantain peanut cassava guar kuka, lamb\'s lettuce.</p>
<p>Kale american groundnut chard radish ulluco lima bean; jícama yam sweet corn aka corn; aka maize lettuce bamboo shoot? Peanut chickweed, ceylon spinach lima bean; chinese cabbage. Arugula celtuce sweet potato or kumara ahipa miner\'s lettuce pignut, garden rocket ensete okra canna leaves mizuna greens.</p>
<p>Pumpkin, tigernut aubergine tarwi. Fat hen brinjal ulluco corn salad sorrel carrot tomato horseradish. Jícama sea kale spinach canna bamboo shoot, golden samphire; squash garden rocket, plectranthus chicory celery spinach winter melon. Kale ahipa good king henry garden rocket.</p>
<p>Pigeon pea chinese mallow - land cress? Samphire yacón, earthnut pea dolichos bean. Bok choy corn salad wild leek camas spinach chinese mallow. Collard greens tinda chickweed chinese cabbage - avocado; pumpkin eggplant beet greens. Prairie turnip bitterleaf velvet bean beet greens lotus root winter purslane tatsoi - polk.</p>
<p>Photo Credit: <a href="http://www.flickr.com/photos/baia/">http://www.flickr.com/photos/baia/</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_address' => array(
      'und' => array(
        0 => array(
          'value' => '2301 North Highland Avenue, Los Angeles, CA',
          'format' => NULL,
          'safe_value' => '2301 North Highland Avenue, Los Angeles, CA',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-07-19 02:30:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_moreinfo' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.hollywoodbowl.com/',
          'title' => 'Events Calendar',
          'attributes' => array(),
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '4',
        ),
      ),
    ),
    'field_event_city' => array(
      'und' => array(
        0 => array(
          'value' => 'Los Angeles',
          'format' => NULL,
          'safe_value' => 'Los Angeles',
        ),
      ),
    ),
    'field_event_venue' => array(
      'und' => array(
        0 => array(
          'value' => 'Hollywood Bowl',
          'format' => NULL,
          'safe_value' => 'Hollywood Bowl',
        ),
      ),
    ),
    'field_event_state' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_venue_address' => array(
      'und' => array(
        0 => array(
          'value' => '2301 North Highland Avenue',
          'format' => NULL,
          'safe_value' => '2301 North Highland Avenue',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-2'] = (object) array(
    'exported_path' => 'shows/ameoba-records',
    'title' => 'In store at Ameoba Records',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011280',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Paracress pak choy cabbage skirret ceylon spinach water chestnut. Kurrat ti tarwi welsh onion horseradish. Sea beet sweet corn aka corn; aka maize. Good King Henry turnip - orache squash, ulluco.</p><p>Sweet pepper jerusalem artichoke cardoon ti urad bean tomatillo parsnip cardoon ceylon spinach, scorzonera brussels sprout. Elephant Garlic chrysanthemum leaves lamb\'s lettuce chinese artichoke rutabaga jerusalem artichoke arugula celery elephant foot yam! Good King Henry wild leek green bean gobo kale, drumstick lamb\'s lettuce; chard. Yam, endive beet greens tomato lima bean; onion land cress gobo orache aubergine hamburg parsley.</p><p>Turnip leaves earthnut pea water spinach burdock aubergine ahipa. Shallot azuki bean beet greens asparagus skirret ahipa, bitterleaf. Celeriac guar lentil. Leek winter purslane guar; kale komatsuna horse gram. Chinese Mallow pea brinjal salsify, tarwi.</p><p>Cassava? Pak choy - jícama. Arracacha; okra. Skirret jícama potato bitter melon epazote common bean lentil mizuna greens pumpkin. Bitterleaf ginger arracacha! Sweet corn aka corn; aka maize - water chestnut nopal sweet corn aka corn; aka maize ginger shallot polk urad bean spinach. Scorzonera prairie turnip pak choy, fat hen ti.</p><p>Tepary bean lizard\'s tail - lamb\'s lettuce pigeon pea water spinach; summer purslane camas elephant garlic ceylon spinach. Common bean mooli; cabbage potato salsify? Horse gram; radicchio polk! Corn salad, chaya, zucchini, mung bean samphire, garden rocket scallion; chicory bamboo shoot.</p><p>Photo Credit:&nbsp;http://www.flickr.com/photos/baia/</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Paracress pak choy cabbage skirret ceylon spinach water chestnut. Kurrat ti tarwi welsh onion horseradish. Sea beet sweet corn aka corn; aka maize. Good King Henry turnip - orache squash, ulluco.</p>
<p>Sweet pepper jerusalem artichoke cardoon ti urad bean tomatillo parsnip cardoon ceylon spinach, scorzonera brussels sprout. Elephant Garlic chrysanthemum leaves lamb\'s lettuce chinese artichoke rutabaga jerusalem artichoke arugula celery elephant foot yam! Good King Henry wild leek green bean gobo kale, drumstick lamb\'s lettuce; chard. Yam, endive beet greens tomato lima bean; onion land cress gobo orache aubergine hamburg parsley.</p>
<p>Turnip leaves earthnut pea water spinach burdock aubergine ahipa. Shallot azuki bean beet greens asparagus skirret ahipa, bitterleaf. Celeriac guar lentil. Leek winter purslane guar; kale komatsuna horse gram. Chinese Mallow pea brinjal salsify, tarwi.</p>
<p>Cassava? Pak choy - jícama. Arracacha; okra. Skirret jícama potato bitter melon epazote common bean lentil mizuna greens pumpkin. Bitterleaf ginger arracacha! Sweet corn aka corn; aka maize - water chestnut nopal sweet corn aka corn; aka maize ginger shallot polk urad bean spinach. Scorzonera prairie turnip pak choy, fat hen ti.</p>
<p>Tepary bean lizard\'s tail - lamb\'s lettuce pigeon pea water spinach; summer purslane camas elephant garlic ceylon spinach. Common bean mooli; cabbage potato salsify? Horse gram; radicchio polk! Corn salad, chaya, zucchini, mung bean samphire, garden rocket scallion; chicory bamboo shoot.</p>
<p>Photo Credit: <a href="http://www.flickr.com/photos/baia/">http://www.flickr.com/photos/baia/</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_address' => array(
      'und' => array(
        0 => array(
          'value' => ' 6400 W Sunset Blvd, Los Angeles, CA 90028',
          'format' => NULL,
          'safe_value' => ' 6400 W Sunset Blvd, Los Angeles, CA 90028',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-07-11 19:15:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_moreinfo' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.amoeba.com/live-shows',
          'title' => 'Events Calendar',
          'attributes' => array(),
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '3',
        ),
      ),
    ),
    'field_event_city' => array(
      'und' => array(
        0 => array(
          'value' => 'Los Angeles',
          'format' => NULL,
          'safe_value' => 'Los Angeles',
        ),
      ),
    ),
    'field_event_venue' => array(
      'und' => array(
        0 => array(
          'value' => 'Ameoba Records',
          'format' => NULL,
          'safe_value' => 'Ameoba Records',
        ),
      ),
    ),
    'field_event_state' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_event_zip_post_code' => array(
      'und' => array(
        0 => array(
          'value' => '90028',
          'format' => NULL,
          'safe_value' => '90028',
        ),
      ),
    ),
    'field_venue_address' => array(
      'und' => array(
        0 => array(
          'value' => ' 6400 W Sunset Blvd',
          'format' => NULL,
          'safe_value' => ' 6400 W Sunset Blvd',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-3'] = (object) array(
    'exported_path' => 'shows/university-california-berkeley',
    'title' => 'University of California at Berkeley',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011280',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-3',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Gumbo green bean pea sprouts. Welsh onion skirret pak choy, swiss chard miner\'s lettuce garden rocket salsify. Samphire, azuki bean tinda drumstick winter melon. Bitterleaf fat hen epazote. Swiss chard corn salad cauliflower; salsify carrot velvet bean water chestnut; fava bean; garden rocket; urad bean peanut turnip greens. Scorzonera, pea sprouts wild leek scorzonera, scorzonera beetroot soko tatsoi; prairie turnip urad bean. Jícama eggplant garlic peanut american groundnut broccoli rabe chicory daikon, bell pepper.</p><p>Gobo golden samphire - scorzonera florence fennel west indian gherkin, cress; ginger wild leek polk. Lima Bean sea kale - radicchio canna, beetroot pea cucumber asparagus turnip. Watercress pignut collard greens elephant foot yam horseradish tomatillo. Fluted pumpkin brinjal cassava leek land cress, pea sprouts garden rocket paracress runner bean.</p><p>Squash nopal - chickpea burdock, yam bamboo shoot. Turnip celery? Chickpea broccoli rabe american groundnut tigernut courgette florence fennel yam bell pepper kohlrabi golden samphire chickpea mizuna greens. Water spinach fluted pumpkin manioc cucumber, soybean?</p><p>Shallot, celtuce soko dolichos bean pea sprouts runner bean ensete horseradish swede arugula leaves ti, gobo? Cucumber polk greater plantain. Lentil kale azuki bean peanut - dolichos bean swiss chard garden rocket garbanzo lotus root napa cabbage mooli.</p><p>Photo Credit:&nbsp;http://www.flickr.com/photos/baia/</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Gumbo green bean pea sprouts. Welsh onion skirret pak choy, swiss chard miner\'s lettuce garden rocket salsify. Samphire, azuki bean tinda drumstick winter melon. Bitterleaf fat hen epazote. Swiss chard corn salad cauliflower; salsify carrot velvet bean water chestnut; fava bean; garden rocket; urad bean peanut turnip greens. Scorzonera, pea sprouts wild leek scorzonera, scorzonera beetroot soko tatsoi; prairie turnip urad bean. Jícama eggplant garlic peanut american groundnut broccoli rabe chicory daikon, bell pepper.</p>
<p>Gobo golden samphire - scorzonera florence fennel west indian gherkin, cress; ginger wild leek polk. Lima Bean sea kale - radicchio canna, beetroot pea cucumber asparagus turnip. Watercress pignut collard greens elephant foot yam horseradish tomatillo. Fluted pumpkin brinjal cassava leek land cress, pea sprouts garden rocket paracress runner bean.</p>
<p>Squash nopal - chickpea burdock, yam bamboo shoot. Turnip celery? Chickpea broccoli rabe american groundnut tigernut courgette florence fennel yam bell pepper kohlrabi golden samphire chickpea mizuna greens. Water spinach fluted pumpkin manioc cucumber, soybean?</p>
<p>Shallot, celtuce soko dolichos bean pea sprouts runner bean ensete horseradish swede arugula leaves ti, gobo? Cucumber polk greater plantain. Lentil kale azuki bean peanut - dolichos bean swiss chard garden rocket garbanzo lotus root napa cabbage mooli.</p>
<p>Photo Credit: <a href="http://www.flickr.com/photos/baia/">http://www.flickr.com/photos/baia/</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_address' => array(
      'und' => array(
        0 => array(
          'value' => '110 Sproul Hall, Berkeley, CA 94720-5800',
          'format' => NULL,
          'safe_value' => '110 Sproul Hall, Berkeley, CA 94720-5800',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-06-18 05:15:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_moreinfo' => array(
      'und' => array(
        0 => array(
          'url' => 'http://events.berkeley.edu/',
          'title' => 'Events Calendar',
          'attributes' => array(),
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '4',
        ),
      ),
    ),
    'field_event_city' => array(
      'und' => array(
        0 => array(
          'value' => 'Berkeley',
          'format' => NULL,
          'safe_value' => 'Berkeley',
        ),
      ),
    ),
    'field_event_venue' => array(
      'und' => array(
        0 => array(
          'value' => 'University of California at Berkeley',
          'format' => NULL,
          'safe_value' => 'University of California at Berkeley',
        ),
      ),
    ),
    'field_event_state' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_event_zip_post_code' => array(
      'und' => array(
        0 => array(
          'value' => '94720-5800',
          'format' => NULL,
          'safe_value' => '94720-5800',
        ),
      ),
    ),
    'field_venue_address' => array(
      'und' => array(
        0 => array(
          'value' => '110 Sproul Hall',
          'format' => NULL,
          'safe_value' => '110 Sproul Hall',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-4'] = (object) array(
    'exported_path' => 'shows/kcrw-morning-becomes-eclectic',
    'title' => 'KCRW Morning Becomes Eclectic',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011220',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-4',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Fiddlehead chicory tarwi brinjal winged bean chinese artichoke, garbanzo skirret, lima bean, kale tomatillo; tatsoi. New Zealand Spinach fiddlehead leaves moth bean lamb\'s lettuce lentil winter melon squash.</p><p>Kurrat, tigernut manioc. Pignut; pigeon pea - soybean, garbanzo. Runner bean ulluco skirret tomatillo tinda cabbage camas, prairie turnip chinese cabbage. Canna collard greens.</p><p>Cassava beetroot. Tatsoi; land cress new zealand spinach. Sierra Leone bologi winter melon lotus root brussels sprout. Guar tatsoi lima bean welsh onion shallot avocado, azuki bean guar new zealand spinach.</p><p>Endive, dandelion pea sprouts avocado pignut horse gram - indian pea potato ceylon spinach. Nopal samphire, water chestnut pumpkin. Plectranthus, garden rocket daikon onion - garden rocket radicchio camas leaves chickweed zucchini soybean.</p><p>Photo Credit:&nbsp;http://www.flickr.com/photos/baia/</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Fiddlehead chicory tarwi brinjal winged bean chinese artichoke, garbanzo skirret, lima bean, kale tomatillo; tatsoi. New Zealand Spinach fiddlehead leaves moth bean lamb\'s lettuce lentil winter melon squash.</p>
<p>Kurrat, tigernut manioc. Pignut; pigeon pea - soybean, garbanzo. Runner bean ulluco skirret tomatillo tinda cabbage camas, prairie turnip chinese cabbage. Canna collard greens.</p>
<p>Cassava beetroot. Tatsoi; land cress new zealand spinach. Sierra Leone bologi winter melon lotus root brussels sprout. Guar tatsoi lima bean welsh onion shallot avocado, azuki bean guar new zealand spinach.</p>
<p>Endive, dandelion pea sprouts avocado pignut horse gram - indian pea potato ceylon spinach. Nopal samphire, water chestnut pumpkin. Plectranthus, garden rocket daikon onion - garden rocket radicchio camas leaves chickweed zucchini soybean.</p>
<p>Photo Credit: <a href="http://www.flickr.com/photos/baia/">http://www.flickr.com/photos/baia/</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-06-01 16:45:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_moreinfo' => array(
      'und' => array(
        0 => array(
          'url' => 'http://www.kcrw.com/',
          'title' => 'KCRW website',
          'attributes' => array(),
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5',
        ),
      ),
    ),
    'field_event_city' => array(
      'und' => array(
        0 => array(
          'value' => 'Santa Monica',
          'format' => NULL,
          'safe_value' => 'Santa Monica',
        ),
      ),
    ),
    'field_event_venue' => array(
      'und' => array(
        0 => array(
          'value' => 'KCRW',
          'format' => NULL,
          'safe_value' => 'KCRW',
        ),
      ),
    ),
    'field_event_state' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-5'] = (object) array(
    'exported_path' => 'shows/mint',
    'title' => 'The Mint',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011220',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-5',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Bell pepper skirret tepary bean horse gram collard greens. Drumstick winged bean garlic. Asparagus plectranthus tarwi paracress pigeon pea mung bean. Carrot, tomato avocado tinda shallot broadleaf arrowhead summer purslane velvet bean, manioc yacón. Shallot, peanut pea sprouts tigernut, mooli - spring onion.</p><p>Celtuce radish celery cassava, burdock, turnip greens; burdock? Chinese cabbage pignut beet greens pignut bamboo shoot earthnut pea, chinese mallow squash! Pumpkin, radish soko aubergine arugula, plectranthus. Summer purslane bitter gourd mustard courgette corn salad winter purslane bell pepper!</p><p>Ahipa, cress pignut. leaves fiddlehead, runner bean; golden samphire, new zealand spinach common bean fluted pumpkin parsnip. Spinach pea gobo bitter gourd kale sweet corn aka corn; aka maize soybean black-eyed pea soko, miner\'s lettuce. Asparagus florence fennel canna welsh onion polk lamb\'s lettuce. Celery, soko winged bean.</p><p>Catsear asparagus rutabaga good king henry cassava, lamb\'s lettuce bok choy, sweet pepper mung bean - urad bean. Chinese artichoke sea beet cucumber canna, west indian gherkin. Cassava bell pepper new zealand spinach parsnip fiddlehead tomatillo cassava kurrat fiddlehead. New Zealand Spinach, garden rocket jerusalem artichoke.</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Bell pepper skirret tepary bean horse gram collard greens. Drumstick winged bean garlic. Asparagus plectranthus tarwi paracress pigeon pea mung bean. Carrot, tomato avocado tinda shallot broadleaf arrowhead summer purslane velvet bean, manioc yacón. Shallot, peanut pea sprouts tigernut, mooli - spring onion.</p>
<p>Celtuce radish celery cassava, burdock, turnip greens; burdock? Chinese cabbage pignut beet greens pignut bamboo shoot earthnut pea, chinese mallow squash! Pumpkin, radish soko aubergine arugula, plectranthus. Summer purslane bitter gourd mustard courgette corn salad winter purslane bell pepper!</p>
<p>Ahipa, cress pignut. leaves fiddlehead, runner bean; golden samphire, new zealand spinach common bean fluted pumpkin parsnip. Spinach pea gobo bitter gourd kale sweet corn aka corn; aka maize soybean black-eyed pea soko, miner\'s lettuce. Asparagus florence fennel canna welsh onion polk lamb\'s lettuce. Celery, soko winged bean.</p>
<p>Catsear asparagus rutabaga good king henry cassava, lamb\'s lettuce bok choy, sweet pepper mung bean - urad bean. Chinese artichoke sea beet cucumber canna, west indian gherkin. Cassava bell pepper new zealand spinach parsnip fiddlehead tomatillo cassava kurrat fiddlehead. New Zealand Spinach, garden rocket jerusalem artichoke.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_address' => array(
      'und' => array(
        0 => array(
          'value' => '6010 West Pico Boulevard  Los Angeles, CA 90035',
          'format' => NULL,
          'safe_value' => '6010 West Pico Boulevard  Los Angeles, CA 90035',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013-10-23 20:00:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_moreinfo' => array(
      'und' => array(
        0 => array(
          'url' => 'http://themintla.com/index.cfm',
          'title' => 'The Mint',
          'attributes' => array(),
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '4',
        ),
      ),
    ),
    'field_event_city' => array(
      'und' => array(
        0 => array(
          'value' => 'Los Angeles',
          'format' => NULL,
          'safe_value' => 'Los Angeles',
        ),
      ),
    ),
    'field_event_venue' => array(
      'und' => array(
        0 => array(
          'value' => 'The Mint',
          'format' => NULL,
          'safe_value' => 'The Mint',
        ),
      ),
    ),
    'field_event_state' => array(
      'und' => array(
        0 => array(
          'value' => ' CA',
          'format' => NULL,
          'safe_value' => ' CA',
        ),
      ),
    ),
    'field_event_zip_post_code' => array(
      'und' => array(
        0 => array(
          'value' => '90035',
          'format' => NULL,
          'safe_value' => '90035',
        ),
      ),
    ),
    'field_venue_address' => array(
      'und' => array(
        0 => array(
          'value' => '6010 West Pico Boulevard ',
          'format' => NULL,
          'safe_value' => '6010 West Pico Boulevard ',
        ),
      ),
    ),
  );

  $content['pushtape-events-defaultcontent-6'] = (object) array(
    'exported_path' => 'shows/stanford-university',
    'title' => 'Stanford University',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'pushtape_event',
    'language' => 'und',
    'created' => '1329011160',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-events-defaultcontent-6',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Canna ensete sea beet. Eggplant, okra onion ulluco moth bean ginger. Spring Onion - spinach lettuce - miner\'s lettuce napa cabbage corn salad.</p><p>Azuki bean summer purslane green bean. Yarrow sweet potato or kumara; leek pak choy tarwi; american groundnut celery; bitter melon carrot ulluco epazote. Plectranthus corn salad spinach pigeon pea velvet bean, yardlong bean parsnip napa cabbage corn salad sweet corn aka corn; aka maize. Kale radicchio.</p><p>Cassava plectranthus, chinese mallow - brinjal kuka. Bok choy cauliflower florence fennel; tinda soybean? Beetroot cucumber chaya bamboo shoot tomato, cassava.</p><p>Soko dolichos bean carrot burdock celery onion. Arugula west indian gherkin bitterleaf daikon brinjal yam. Winged bean ceylon spinach green bean eggplant salsify - bamboo shoot cress peanut, burdock melokhia, elephant foot yam. Good King Henry tinda; canna pignut lotus root summer purslane.</p><p>Photo Credit:&nbsp;http://www.flickr.com/photos/baia/</p>',
          'summary' => '',
          'format' => 'panopoly_wysiwyg_text',
          'safe_value' => '<p>Canna ensete sea beet. Eggplant, okra onion ulluco moth bean ginger. Spring Onion - spinach lettuce - miner\'s lettuce napa cabbage corn salad.</p>
<p>Azuki bean summer purslane green bean. Yarrow sweet potato or kumara; leek pak choy tarwi; american groundnut celery; bitter melon carrot ulluco epazote. Plectranthus corn salad spinach pigeon pea velvet bean, yardlong bean parsnip napa cabbage corn salad sweet corn aka corn; aka maize. Kale radicchio.</p>
<p>Cassava plectranthus, chinese mallow - brinjal kuka. Bok choy cauliflower florence fennel; tinda soybean? Beetroot cucumber chaya bamboo shoot tomato, cassava.</p>
<p>Soko dolichos bean carrot burdock celery onion. Arugula west indian gherkin bitterleaf daikon brinjal yam. Winged bean ceylon spinach green bean eggplant salsify - bamboo shoot cress peanut, burdock melokhia, elephant foot yam. Good King Henry tinda; canna pignut lotus root summer purslane.</p>
<p>Photo Credit: <a href="http://www.flickr.com/photos/baia/">http://www.flickr.com/photos/baia/</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_address' => array(
      'und' => array(
        0 => array(
          'value' => '450 Serra Mall, Stanford University, Stanford CA, 94305-2145',
          'format' => NULL,
          'safe_value' => '450 Serra Mall, Stanford University, Stanford CA, 94305-2145',
        ),
      ),
    ),
    'field_event_date' => array(
      'und' => array(
        0 => array(
          'value' => '2012-06-05 01:00:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_event_type' => array(
      'und' => array(
        0 => array(
          'tid' => '4',
        ),
      ),
    ),
    'field_event_city' => array(
      'und' => array(
        0 => array(
          'value' => 'Stanford',
          'format' => NULL,
          'safe_value' => 'Stanford',
        ),
      ),
    ),
    'field_event_venue' => array(
      'und' => array(
        0 => array(
          'value' => 'Stanford University',
          'format' => NULL,
          'safe_value' => 'Stanford University',
        ),
      ),
    ),
    'field_event_state' => array(
      'und' => array(
        0 => array(
          'value' => 'CA',
          'format' => NULL,
          'safe_value' => 'CA',
        ),
      ),
    ),
    'field_event_zip_post_code' => array(
      'und' => array(
        0 => array(
          'value' => '94305-2145',
          'format' => NULL,
          'safe_value' => '94305-2145',
        ),
      ),
    ),
    'field_venue_address' => array(
      'und' => array(
        0 => array(
          'value' => 'Main Quad, Building 110, 450 Serra Mall',
          'format' => NULL,
          'safe_value' => 'Main Quad, Building 110, 450 Serra Mall',
        ),
      ),
    ),
  );

return $content;
}
