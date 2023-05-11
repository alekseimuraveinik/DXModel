
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXQuoteDirection_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection || defined(INCLUDE_DXQuoteDirection))
#define DXQuoteDirection_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXQuoteDirection : PSBaseEnum
@property (readonly, class, strong) DXQuoteDirection *NONE NS_SWIFT_NAME(NONE);
@property (readonly, class, strong) DXQuoteDirection *UP NS_SWIFT_NAME(UP);
@property (readonly, class, strong) DXQuoteDirection *DOWN NS_SWIFT_NAME(DOWN);

+ (DXQuoteDirection *)NONE;

+ (DXQuoteDirection *)UP;

+ (DXQuoteDirection *)DOWN;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXQuoteDirection *)change;

- (DXQuoteDirection *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXQuoteDirection *)findByOrdinalWithInt:(jint)ordinal;

+ (DXQuoteDirection *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXQuoteDirection *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXQuoteDirection)

inline DXQuoteDirection *DXQuoteDirection_get_NONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuoteDirection *DXQuoteDirection_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuoteDirection, NONE, DXQuoteDirection *)

inline DXQuoteDirection *DXQuoteDirection_get_UP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuoteDirection *DXQuoteDirection_UP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuoteDirection, UP, DXQuoteDirection *)

inline DXQuoteDirection *DXQuoteDirection_get_DOWN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXQuoteDirection *DXQuoteDirection_DOWN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXQuoteDirection, DOWN, DXQuoteDirection *)

FOUNDATION_EXPORT void DXQuoteDirection_initWithNSString_withInt_(DXQuoteDirection *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXQuoteDirection *new_DXQuoteDirection_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuoteDirection *create_DXQuoteDirection_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXQuoteDirection_init(DXQuoteDirection *self);

FOUNDATION_EXPORT DXQuoteDirection *new_DXQuoteDirection_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXQuoteDirection *create_DXQuoteDirection_init(void);

FOUNDATION_EXPORT DXQuoteDirection *DXQuoteDirection_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXQuoteDirection *DXQuoteDirection_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXQuoteDirection_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXQuoteDirection)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteQuoteDirection DXQuoteDirection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteQuoteDirection")
