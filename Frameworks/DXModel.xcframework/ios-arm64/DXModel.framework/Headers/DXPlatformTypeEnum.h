
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPlatformTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum || defined(INCLUDE_DXPlatformTypeEnum))
#define DXPlatformTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXPlatformTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXPlatformTypeEnum *UNKNOWN NS_SWIFT_NAME(UNKNOWN);
@property (readonly, class, strong) DXPlatformTypeEnum *DEMO NS_SWIFT_NAME(DEMO);
@property (readonly, class, strong) DXPlatformTypeEnum *LIVE NS_SWIFT_NAME(LIVE);

+ (DXPlatformTypeEnum *)UNKNOWN;

+ (DXPlatformTypeEnum *)DEMO;

+ (DXPlatformTypeEnum *)LIVE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXPlatformTypeEnum *)change;

- (DXPlatformTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXPlatformTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXPlatformTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXPlatformTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXPlatformTypeEnum)

inline DXPlatformTypeEnum *DXPlatformTypeEnum_get_UNKNOWN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPlatformTypeEnum *DXPlatformTypeEnum_UNKNOWN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPlatformTypeEnum, UNKNOWN, DXPlatformTypeEnum *)

inline DXPlatformTypeEnum *DXPlatformTypeEnum_get_DEMO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPlatformTypeEnum *DXPlatformTypeEnum_DEMO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPlatformTypeEnum, DEMO, DXPlatformTypeEnum *)

inline DXPlatformTypeEnum *DXPlatformTypeEnum_get_LIVE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPlatformTypeEnum *DXPlatformTypeEnum_LIVE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPlatformTypeEnum, LIVE, DXPlatformTypeEnum *)

FOUNDATION_EXPORT void DXPlatformTypeEnum_initWithNSString_withInt_(DXPlatformTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXPlatformTypeEnum *new_DXPlatformTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPlatformTypeEnum *create_DXPlatformTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXPlatformTypeEnum_init(DXPlatformTypeEnum *self);

FOUNDATION_EXPORT DXPlatformTypeEnum *new_DXPlatformTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPlatformTypeEnum *create_DXPlatformTypeEnum_init(void);

FOUNDATION_EXPORT DXPlatformTypeEnum *DXPlatformTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXPlatformTypeEnum *DXPlatformTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXPlatformTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPlatformTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum DXPlatformTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountPlatformTypeEnum")
