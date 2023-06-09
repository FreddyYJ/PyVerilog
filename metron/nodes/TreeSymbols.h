#pragma once

// This is a dirty hack to allow Metron to refer to TreeSitter node types by ID.
// These are internal identifiers and must be kept in sync with the TreeSitter
// repo.

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_base = 4,
  field_body = 5,
  field_captures = 6,
  field_condition = 7,
  field_consequence = 8,
  field_constraint = 9,
  field_declarator = 10,
  field_default_type = 11,
  field_default_value = 12,
  field_delimiter = 13,
  field_designator = 14,
  field_directive = 15,
  field_field = 16,
  field_function = 17,
  field_index = 18,
  field_initializer = 19,
  field_label = 20,
  field_left = 21,
  field_length = 22,
  field_message = 23,
  field_name = 24,
  field_operator = 25,
  field_parameters = 26,
  field_path = 27,
  field_pattern = 28,
  field_placement = 29,
  field_prefix = 30,
  field_requirements = 31,
  field_right = 32,
  field_scope = 33,
  field_size = 34,
  field_template_parameters = 35,
  field_type = 36,
  field_update = 37,
  field_value = 38,
};

enum {
  sym_identifier = 1,
  aux_sym_preproc_include_token1 = 2,
  anon_sym_LF = 3,
  aux_sym_preproc_def_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_DOT_DOT_DOT = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  aux_sym_preproc_if_token1 = 9,
  aux_sym_preproc_if_token2 = 10,
  aux_sym_preproc_ifdef_token1 = 11,
  aux_sym_preproc_ifdef_token2 = 12,
  aux_sym_preproc_else_token1 = 13,
  aux_sym_preproc_elif_token1 = 14,
  sym_preproc_directive = 15,
  sym_preproc_arg = 16,
  anon_sym_LPAREN2 = 17,
  anon_sym_defined = 18,
  anon_sym_BANG = 19,
  anon_sym_TILDE = 20,
  anon_sym_DASH = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE = 28,
  anon_sym_CARET = 29,
  anon_sym_AMP = 30,
  anon_sym_EQ_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_LT = 36,
  anon_sym_LT_LT = 37,
  anon_sym_GT_GT = 38,
  anon_sym_SEMI = 39,
  anon_sym_typedef = 40,
  anon_sym_extern = 41,
  anon_sym___attribute__ = 42,
  anon_sym_COLON_COLON = 43,
  anon_sym_LBRACK_LBRACK = 44,
  anon_sym_RBRACK_RBRACK = 45,
  anon_sym___declspec = 46,
  anon_sym___based = 47,
  anon_sym___cdecl = 48,
  anon_sym___clrcall = 49,
  anon_sym___stdcall = 50,
  anon_sym___fastcall = 51,
  anon_sym___thiscall = 52,
  anon_sym___vectorcall = 53,
  sym_ms_restrict_modifier = 54,
  sym_ms_unsigned_ptr_modifier = 55,
  sym_ms_signed_ptr_modifier = 56,
  anon_sym__unaligned = 57,
  anon_sym___unaligned = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  anon_sym_EQ = 63,
  anon_sym_static = 64,
  anon_sym_register = 65,
  anon_sym_inline = 66,
  anon_sym_thread_local = 67,
  anon_sym_const = 68,
  anon_sym_volatile = 69,
  anon_sym_restrict = 70,
  anon_sym__Atomic = 71,
  anon_sym_mutable = 72,
  anon_sym_constexpr = 73,
  anon_sym_constinit = 74,
  anon_sym_consteval = 75,
  anon_sym_signed = 76,
  anon_sym_unsigned = 77,
  anon_sym_long = 78,
  anon_sym_short = 79,
  sym_primitive_type = 80,
  anon_sym_enum = 81,
  anon_sym_class = 82,
  anon_sym_struct = 83,
  anon_sym_union = 84,
  anon_sym_COLON = 85,
  anon_sym_if = 86,
  anon_sym_else = 87,
  anon_sym_switch = 88,
  anon_sym_case = 89,
  anon_sym_default = 90,
  anon_sym_while = 91,
  anon_sym_do = 92,
  anon_sym_for = 93,
  anon_sym_return = 94,
  anon_sym_break = 95,
  anon_sym_continue = 96,
  anon_sym_goto = 97,
  anon_sym_QMARK = 98,
  anon_sym_STAR_EQ = 99,
  anon_sym_SLASH_EQ = 100,
  anon_sym_PERCENT_EQ = 101,
  anon_sym_PLUS_EQ = 102,
  anon_sym_DASH_EQ = 103,
  anon_sym_LT_LT_EQ = 104,
  anon_sym_GT_GT_EQ = 105,
  anon_sym_AMP_EQ = 106,
  anon_sym_CARET_EQ = 107,
  anon_sym_PIPE_EQ = 108,
  anon_sym_and_eq = 109,
  anon_sym_or_eq = 110,
  anon_sym_xor_eq = 111,
  anon_sym_not = 112,
  anon_sym_compl = 113,
  anon_sym_LT_EQ_GT = 114,
  anon_sym_or = 115,
  anon_sym_and = 116,
  anon_sym_bitor = 117,
  anon_sym_xor = 118,
  anon_sym_bitand = 119,
  anon_sym_not_eq = 120,
  anon_sym_DASH_DASH = 121,
  anon_sym_PLUS_PLUS = 122,
  anon_sym_sizeof = 123,
  anon_sym_DOT = 124,
  anon_sym_DASH_GT = 125,
  sym_number_literal = 126,
  anon_sym_L_SQUOTE = 127,
  anon_sym_u_SQUOTE = 128,
  anon_sym_U_SQUOTE = 129,
  anon_sym_u8_SQUOTE = 130,
  anon_sym_SQUOTE = 131,
  aux_sym_char_literal_token1 = 132,
  anon_sym_L_DQUOTE = 133,
  anon_sym_u_DQUOTE = 134,
  anon_sym_U_DQUOTE = 135,
  anon_sym_u8_DQUOTE = 136,
  anon_sym_DQUOTE = 137,
  aux_sym_string_literal_token1 = 138,
  sym_escape_sequence = 139,
  sym_system_lib_string = 140,
  sym_true = 141,
  sym_false = 142,
  sym_null = 143,
  sym_comment = 144,
  sym_auto = 145,
  anon_sym_decltype = 146,
  anon_sym_final = 147,
  anon_sym_override = 148,
  anon_sym_virtual = 149,
  anon_sym_explicit = 150,
  anon_sym_typename = 151,
  anon_sym_template = 152,
  anon_sym_GT2 = 153,
  anon_sym_operator = 154,
  anon_sym_try = 155,
  anon_sym_delete = 156,
  anon_sym_friend = 157,
  anon_sym_public = 158,
  anon_sym_private = 159,
  anon_sym_protected = 160,
  anon_sym_noexcept = 161,
  anon_sym_throw = 162,
  anon_sym_namespace = 163,
  anon_sym_using = 164,
  anon_sym_static_assert = 165,
  anon_sym_concept = 166,
  anon_sym_co_return = 167,
  anon_sym_co_yield = 168,
  anon_sym_catch = 169,
  anon_sym_R_DQUOTE = 170,
  anon_sym_LR_DQUOTE = 171,
  anon_sym_uR_DQUOTE = 172,
  anon_sym_UR_DQUOTE = 173,
  anon_sym_u8R_DQUOTE = 174,
  anon_sym_co_await = 175,
  anon_sym_new = 176,
  anon_sym_requires = 177,
  anon_sym_DOT_STAR = 178,
  anon_sym_DASH_GT_STAR = 179,
  anon_sym_LPAREN_RPAREN = 180,
  anon_sym_LBRACK_RBRACK = 181,
  anon_sym_DQUOTE_DQUOTE = 182,
  sym_this = 183,
  sym_nullptr = 184,
  sym_literal_suffix = 185,
  sym_raw_string_delimiter = 186,
  sym_raw_string_content = 187,
  sym_translation_unit = 188,
  sym_preproc_include = 189,
  sym_preproc_def = 190,
  sym_preproc_function_def = 191,
  sym_preproc_params = 192,
  sym_preproc_call = 193,
  sym_preproc_if = 194,
  sym_preproc_ifdef = 195,
  sym_preproc_else = 196,
  sym_preproc_elif = 197,
  sym_preproc_if_in_field_declaration_list = 198,
  sym_preproc_ifdef_in_field_declaration_list = 199,
  sym_preproc_else_in_field_declaration_list = 200,
  sym_preproc_elif_in_field_declaration_list = 201,
  sym__preproc_expression = 202,
  sym_preproc_parenthesized_expression = 203,
  sym_preproc_defined = 204,
  sym_preproc_unary_expression = 205,
  sym_preproc_call_expression = 206,
  sym_preproc_argument_list = 207,
  sym_preproc_binary_expression = 208,
  sym_function_definition = 209,
  sym_declaration = 210,
  sym_type_definition = 211,
  sym__declaration_modifiers = 212,
  sym__declaration_specifiers = 213,
  sym_linkage_specification = 214,
  sym_attribute_specifier = 215,
  sym_attribute = 216,
  sym_attribute_declaration = 217,
  sym_ms_declspec_modifier = 218,
  sym_ms_based_modifier = 219,
  sym_ms_call_modifier = 220,
  sym_ms_unaligned_ptr_modifier = 221,
  sym_ms_pointer_modifier = 222,
  sym_declaration_list = 223,
  sym__declarator = 224,
  sym__field_declarator = 225,
  sym__type_declarator = 226,
  sym__abstract_declarator = 227,
  sym_parenthesized_declarator = 228,
  sym_parenthesized_field_declarator = 229,
  sym_parenthesized_type_declarator = 230,
  sym_abstract_parenthesized_declarator = 231,
  sym_attributed_declarator = 232,
  sym_attributed_field_declarator = 233,
  sym_attributed_type_declarator = 234,
  sym_pointer_declarator = 235,
  sym_pointer_field_declarator = 236,
  sym_pointer_type_declarator = 237,
  sym_abstract_pointer_declarator = 238,
  sym_function_declarator = 239,
  sym_function_field_declarator = 240,
  sym_function_type_declarator = 241,
  sym_abstract_function_declarator = 242,
  sym_array_declarator = 243,
  sym_array_field_declarator = 244,
  sym_array_type_declarator = 245,
  sym_abstract_array_declarator = 246,
  sym_init_declarator = 247,
  sym_compound_statement = 248,
  sym_storage_class_specifier = 249,
  sym_type_qualifier = 250,
  sym__type_specifier = 251,
  sym_sized_type_specifier = 252,
  sym_enum_specifier = 253,
  sym_enumerator_list = 254,
  sym_struct_specifier = 255,
  sym_union_specifier = 256,
  sym_field_declaration_list = 257,
  sym__field_declaration_list_item = 258,
  sym_field_declaration = 259,
  sym_bitfield_clause = 260,
  sym_enumerator = 261,
  sym_parameter_list = 262,
  sym_parameter_declaration = 263,
  sym_attributed_statement = 264,
  sym_labeled_statement = 265,
  sym_expression_statement = 266,
  sym_if_statement = 267,
  sym_switch_statement = 268,
  sym_case_statement = 269,
  sym_while_statement = 270,
  sym_do_statement = 271,
  sym_for_statement = 272,
  sym_return_statement = 273,
  sym_break_statement = 274,
  sym_continue_statement = 275,
  sym_goto_statement = 276,
  sym__expression = 277,
  sym_comma_expression = 278,
  sym_conditional_expression = 279,
  sym_assignment_expression = 280,
  sym_pointer_expression = 281,
  sym_unary_expression = 282,
  sym_binary_expression = 283,
  sym_update_expression = 284,
  sym_cast_expression = 285,
  sym_type_descriptor = 286,
  sym_sizeof_expression = 287,
  sym_subscript_expression = 288,
  sym_call_expression = 289,
  sym_argument_list = 290,
  sym_field_expression = 291,
  sym_compound_literal_expression = 292,
  sym_parenthesized_expression = 293,
  sym_initializer_list = 294,
  sym_initializer_pair = 295,
  sym_subscript_designator = 296,
  sym_field_designator = 297,
  sym_char_literal = 298,
  sym_concatenated_string = 299,
  sym_string_literal = 300,
  sym__empty_declaration = 301,
  sym_placeholder_type_specifier = 302,
  sym_decltype_auto = 303,
  sym_decltype = 304,
  sym__class_declaration = 305,
  sym_class_specifier = 306,
  sym__class_name = 307,
  sym_virtual_specifier = 308,
  sym_virtual = 309,
  sym_explicit_function_specifier = 310,
  sym_base_class_clause = 311,
  sym__enum_base_clause = 312,
  sym_dependent_type = 313,
  sym_template_declaration = 314,
  sym_template_instantiation = 315,
  sym_template_parameter_list = 316,
  sym_type_parameter_declaration = 317,
  sym_variadic_type_parameter_declaration = 318,
  sym_optional_type_parameter_declaration = 319,
  sym_template_template_parameter_declaration = 320,
  sym_optional_parameter_declaration = 321,
  sym_variadic_parameter_declaration = 322,
  sym_variadic_declarator = 323,
  sym_variadic_reference_declarator = 324,
  sym_operator_cast = 325,
  sym_field_initializer_list = 326,
  sym_field_initializer = 327,
  sym_inline_method_definition = 328,
  sym__constructor_specifiers = 329,
  sym_operator_cast_definition = 330,
  sym_operator_cast_declaration = 331,
  sym_constructor_try_statement = 332,
  sym_constructor_or_destructor_definition = 333,
  sym_constructor_or_destructor_declaration = 334,
  sym_default_method_clause = 335,
  sym_delete_method_clause = 336,
  sym_friend_declaration = 337,
  sym_access_specifier = 338,
  sym_reference_declarator = 339,
  sym_reference_field_declarator = 340,
  sym_abstract_reference_declarator = 341,
  sym_structured_binding_declarator = 342,
  sym_ref_qualifier = 343,
  sym__function_declarator_seq = 344,
  sym_trailing_return_type = 345,
  sym_noexcept = 346,
  sym_throw_specifier = 347,
  sym_template_type = 348,
  sym_template_method = 349,
  sym_template_function = 350,
  sym_template_argument_list = 351,
  sym_namespace_definition = 352,
  sym_namespace_alias_definition = 353,
  sym__namespace_specifier = 354,
  sym_nested_namespace_specifier = 355,
  sym_using_declaration = 356,
  sym_alias_declaration = 357,
  sym_static_assert_declaration = 358,
  sym_concept_definition = 359,
  sym_for_range_loop = 360,
  sym_init_statement = 361,
  sym_condition_clause = 362,
  sym_condition_declaration = 363,
  sym_co_return_statement = 364,
  sym_co_yield_statement = 365,
  sym_throw_statement = 366,
  sym_try_statement = 367,
  sym_catch_clause = 368,
  sym_raw_string_literal = 369,
  sym_co_await_expression = 370,
  sym_new_expression = 371,
  sym_new_declarator = 372,
  sym_delete_expression = 373,
  sym_type_requirement = 374,
  sym_compound_requirement = 375,
  sym__requirement = 376,
  sym_requirement_seq = 377,
  sym_constraint_conjunction = 378,
  sym_constraint_disjunction = 379,
  sym__requirement_clause_constraint = 380,
  sym_requires_clause = 381,
  sym_requires_parameter_list = 382,
  sym_requires_expression = 383,
  sym_lambda_expression = 384,
  sym_lambda_capture_specifier = 385,
  sym_lambda_default_capture = 386,
  sym__fold_operator = 387,
  sym__binary_fold_operator = 388,
  sym__unary_left_fold = 389,
  sym__unary_right_fold = 390,
  sym__binary_fold = 391,
  sym_fold_expression = 392,
  sym_parameter_pack_expansion = 393,
  sym_type_parameter_pack_expansion = 394,
  sym_destructor_name = 395,
  sym_dependent_identifier = 396,
  sym_dependent_field_identifier = 397,
  sym_dependent_type_identifier = 398,
  sym__scope_resolution = 399,
  sym_qualified_field_identifier = 400,
  sym_qualified_identifier = 401,
  sym_qualified_type_identifier = 402,
  sym_qualified_operator_cast_identifier = 403,
  sym_operator_name = 404,
  sym_user_defined_literal = 405,
  aux_sym_translation_unit_repeat1 = 406,
  aux_sym_preproc_params_repeat1 = 407,
  aux_sym_preproc_if_in_field_declaration_list_repeat1 = 408,
  aux_sym_preproc_argument_list_repeat1 = 409,
  aux_sym_declaration_repeat1 = 410,
  aux_sym_type_definition_repeat1 = 411,
  aux_sym_type_definition_repeat2 = 412,
  aux_sym__declaration_specifiers_repeat1 = 413,
  aux_sym_attribute_declaration_repeat1 = 414,
  aux_sym_attributed_declarator_repeat1 = 415,
  aux_sym_pointer_declarator_repeat1 = 416,
  aux_sym_sized_type_specifier_repeat1 = 417,
  aux_sym_enumerator_list_repeat1 = 418,
  aux_sym_field_declaration_repeat1 = 419,
  aux_sym_parameter_list_repeat1 = 420,
  aux_sym_case_statement_repeat1 = 421,
  aux_sym_argument_list_repeat1 = 422,
  aux_sym_initializer_list_repeat1 = 423,
  aux_sym_initializer_pair_repeat1 = 424,
  aux_sym_concatenated_string_repeat1 = 425,
  aux_sym_string_literal_repeat1 = 426,
  aux_sym_base_class_clause_repeat1 = 427,
  aux_sym_template_parameter_list_repeat1 = 428,
  aux_sym_field_initializer_list_repeat1 = 429,
  aux_sym_operator_cast_definition_repeat1 = 430,
  aux_sym_constructor_try_statement_repeat1 = 431,
  aux_sym_structured_binding_declarator_repeat1 = 432,
  aux_sym__function_declarator_seq_repeat1 = 433,
  aux_sym__function_declarator_seq_repeat2 = 434,
  aux_sym_throw_specifier_repeat1 = 435,
  aux_sym_template_argument_list_repeat1 = 436,
  aux_sym_requirement_seq_repeat1 = 437,
  aux_sym_requires_parameter_list_repeat1 = 438,
  aux_sym_lambda_capture_specifier_repeat1 = 439,
  alias_sym_field_identifier = 440,
  alias_sym_namespace_identifier = 441,
  alias_sym_simple_requirement = 442,
  alias_sym_statement_identifier = 443,
  alias_sym_type_identifier = 444,
};
