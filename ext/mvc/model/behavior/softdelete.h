
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_mvc_model_behavior_softdelete_ce;

PHALCON_INIT_CLASS(Phalcon_Mvc_Model_Behavior_SoftDelete);

PHP_METHOD(Phalcon_Mvc_Model_Behavior_SoftDelete, notify);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_behavior_softdelete_notify, 0, 0, 2)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_mvc_model_behavior_softdelete_method_entry){
	PHP_ME(Phalcon_Mvc_Model_Behavior_SoftDelete, notify, arginfo_phalcon_mvc_model_behavior_softdelete_notify, ZEND_ACC_PUBLIC) 
	PHP_FE_END
};

