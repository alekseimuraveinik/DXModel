
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSignUpModeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum || defined(INCLUDE_DXSignUpModeEnum))
#define DXSignUpModeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXSignUpModeEnum : PSBaseEnum
@property (readonly, class, strong) DXSignUpModeEnum *UNKNOWN NS_SWIFT_NAME(UNKNOWN);
@property (readonly, class, strong) DXSignUpModeEnum *SHORT NS_SWIFT_NAME(SHORT);
@property (readonly, class, strong) DXSignUpModeEnum *FULL NS_SWIFT_NAME(FULL);

+ (DXSignUpModeEnum *)UNKNOWN;

+ (DXSignUpModeEnum *)SHORT;

+ (DXSignUpModeEnum *)FULL;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXSignUpModeEnum *)change;

- (DXSignUpModeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXSignUpModeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXSignUpModeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXSignUpModeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXSignUpModeEnum)

inline DXSignUpModeEnum *DXSignUpModeEnum_get_UNKNOWN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpModeEnum *DXSignUpModeEnum_UNKNOWN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpModeEnum, UNKNOWN, DXSignUpModeEnum *)

inline DXSignUpModeEnum *DXSignUpModeEnum_get_SHORT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpModeEnum *DXSignUpModeEnum_SHORT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpModeEnum, SHORT, DXSignUpModeEnum *)

inline DXSignUpModeEnum *DXSignUpModeEnum_get_FULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpModeEnum *DXSignUpModeEnum_FULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpModeEnum, FULL, DXSignUpModeEnum *)

FOUNDATION_EXPORT void DXSignUpModeEnum_initWithNSString_withInt_(DXSignUpModeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXSignUpModeEnum *new_DXSignUpModeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSignUpModeEnum *create_DXSignUpModeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXSignUpModeEnum_init(DXSignUpModeEnum *self);

FOUNDATION_EXPORT DXSignUpModeEnum *new_DXSignUpModeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSignUpModeEnum *create_DXSignUpModeEnum_init(void);

FOUNDATION_EXPORT DXSignUpModeEnum *DXSignUpModeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXSignUpModeEnum *DXSignUpModeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXSignUpModeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSignUpModeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum DXSignUpModeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpModeEnum")
