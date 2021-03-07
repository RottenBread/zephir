
extern zend_class_entry *stub_properties_publicproperties_ce;

ZEPHIR_INIT_CLASS(Stub_Properties_PublicProperties);

PHP_METHOD(Stub_Properties_PublicProperties, setSomeGetterSetterArray);
PHP_METHOD(Stub_Properties_PublicProperties, getSomeGetterSetterArray);
PHP_METHOD(Stub_Properties_PublicProperties, test394Issue);
zend_object *zephir_init_properties_Stub_Properties_PublicProperties(zend_class_entry *class_type);

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_publicproperties_setsomegettersetterarray, 0, 0, 1)
	ZEND_ARG_INFO(0, someGetterSetterArray)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_publicproperties_getsomegettersetterarray, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_publicproperties_test394issue, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stub_properties_publicproperties_zephir_init_properties_stub_properties_publicproperties, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(stub_properties_publicproperties_method_entry) {
	PHP_ME(Stub_Properties_PublicProperties, setSomeGetterSetterArray, arginfo_stub_properties_publicproperties_setsomegettersetterarray, ZEND_ACC_PUBLIC)
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_PublicProperties, getSomeGetterSetterArray, arginfo_stub_properties_publicproperties_getsomegettersetterarray, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_PublicProperties, getSomeGetterSetterArray, NULL, ZEND_ACC_PUBLIC)
#endif
#if PHP_VERSION_ID >= 80000
	PHP_ME(Stub_Properties_PublicProperties, test394Issue, arginfo_stub_properties_publicproperties_test394issue, ZEND_ACC_PUBLIC)
#else
	PHP_ME(Stub_Properties_PublicProperties, test394Issue, NULL, ZEND_ACC_PUBLIC)
#endif
	PHP_FE_END
};
