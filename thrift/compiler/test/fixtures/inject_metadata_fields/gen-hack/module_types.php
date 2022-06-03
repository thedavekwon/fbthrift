<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Fields
 */
class Fields implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    100 => shape(
      'var' => 'injected_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'injected_field' => 100,
  ];

  const type TConstructorShape = shape(
    ?'injected_field' => ?string,
  );

  const int STRUCTURAL_ID = 8264058527515912971;
  /**
   * Original thrift field:-
   * 100: string injected_field
   */
  public string $injected_field;

  public function __construct(?string $injected_field = null  )[] {
    $this->injected_field = $injected_field ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'injected_field'),
    );
  }

  public function getName()[]: string {
    return 'Fields';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Fields",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 100,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_field",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * FieldsInjectedToEmptyStruct
 */
class FieldsInjectedToEmptyStruct implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    -1100 => shape(
      'var' => 'injected_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'injected_field' => -1100,
  ];

  const type TConstructorShape = shape(
    ?'injected_field' => ?string,
  );

  const int STRUCTURAL_ID = 4521072312993129309;
  /**
   * Original thrift field:-
   * -1100: string injected_field
   */
  public string $injected_field;

  public function __construct(?string $injected_field = null  )[] {
    $this->injected_field = $injected_field ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'injected_field'),
    );
  }

  public function getName()[]: string {
    return 'FieldsInjectedToEmptyStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.FieldsInjectedToEmptyStruct",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => -1100,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_field",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_InjectMetadataFields' => facebook_thrift_annotation_InjectMetadataFields::fromShape(
          shape(
            "type" => "Fields",
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * FieldsInjectedToStruct
 */
class FieldsInjectedToStruct implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'string_field',
      'type' => \TType::STRING,
    ),
    -1100 => shape(
      'var' => 'injected_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'string_field' => 1,
    'injected_field' => -1100,
  ];

  const type TConstructorShape = shape(
    ?'string_field' => ?string,
    ?'injected_field' => ?string,
  );

  const int STRUCTURAL_ID = 6883092442816482656;
  /**
   * Original thrift field:-
   * 1: string string_field
   */
  public string $string_field;
  /**
   * Original thrift field:-
   * -1100: string injected_field
   */
  public string $injected_field;

  public function __construct(?string $string_field = null, ?string $injected_field = null  )[] {
    $this->string_field = $string_field ?? '';
    $this->injected_field = $injected_field ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'string_field'),
      Shapes::idx($shape, 'injected_field'),
    );
  }

  public function getName()[]: string {
    return 'FieldsInjectedToStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.FieldsInjectedToStruct",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "string_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => -1100,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_field",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_InjectMetadataFields' => facebook_thrift_annotation_InjectMetadataFields::fromShape(
          shape(
            "type" => "Fields",
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * FieldsInjectedWithIncludedStruct
 */
class FieldsInjectedWithIncludedStruct implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'string_field',
      'type' => \TType::STRING,
    ),
    -1100 => shape(
      'var' => 'injected_field',
      'type' => \TType::STRING,
    ),
    -1101 => shape(
      'var' => 'injected_structured_annotation_field',
      'type' => \TType::STRING,
    ),
    -1102 => shape(
      'var' => 'injected_unstructured_annotation_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'string_field' => 1,
    'injected_field' => -1100,
    'injected_structured_annotation_field' => -1101,
    'injected_unstructured_annotation_field' => -1102,
  ];

  const type TConstructorShape = shape(
    ?'string_field' => ?string,
    ?'injected_field' => ?string,
    ?'injected_structured_annotation_field' => ?string,
    ?'injected_unstructured_annotation_field' => ?string,
  );

  const int STRUCTURAL_ID = 1871478197671938632;
  /**
   * Original thrift field:-
   * 1: string string_field
   */
  public string $string_field;
  /**
   * Original thrift field:-
   * -1100: string injected_field
   */
  public string $injected_field;
  /**
   * Original thrift field:-
   * -1101: string injected_structured_annotation_field
   */
  public ?string $injected_structured_annotation_field;
  /**
   * Original thrift field:-
   * -1102: string injected_unstructured_annotation_field
   */
  public ?string $injected_unstructured_annotation_field;

  public function __construct(?string $string_field = null, ?string $injected_field = null, ?string $injected_structured_annotation_field = null, ?string $injected_unstructured_annotation_field = null  )[] {
    $this->string_field = $string_field ?? '';
    $this->injected_field = $injected_field ?? '';
    $this->injected_structured_annotation_field = $injected_structured_annotation_field;
    $this->injected_unstructured_annotation_field = $injected_unstructured_annotation_field;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'string_field'),
      Shapes::idx($shape, 'injected_field'),
      Shapes::idx($shape, 'injected_structured_annotation_field'),
      Shapes::idx($shape, 'injected_unstructured_annotation_field'),
    );
  }

  public function getName()[]: string {
    return 'FieldsInjectedWithIncludedStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.FieldsInjectedWithIncludedStruct",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "string_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => -1100,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => -1101,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_structured_annotation_field",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => -1102,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_unstructured_annotation_field",
              "is_optional" => true,
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_InjectMetadataFields' => facebook_thrift_annotation_InjectMetadataFields::fromShape(
          shape(
            "type" => "foo.Fields",
          )
        ),
      ],
      'fields' => dict[
        'injected_structured_annotation_field' => shape(
          'field' => dict[
            'facebook_thrift_annotation_Box' => facebook_thrift_annotation_Box::fromShape(
              shape(
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

