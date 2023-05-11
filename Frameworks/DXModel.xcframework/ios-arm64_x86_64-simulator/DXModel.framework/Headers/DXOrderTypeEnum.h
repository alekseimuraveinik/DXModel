
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum || defined(INCLUDE_DXOrderTypeEnum))
#define DXOrderTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXOrderTypeEnum *CANCEL NS_SWIFT_NAME(CANCEL);
@property (readonly, class, strong) DXOrderTypeEnum *MARKET NS_SWIFT_NAME(MARKET);
@property (readonly, class, strong) DXOrderTypeEnum *LIMIT NS_SWIFT_NAME(LIMIT);
@property (readonly, class, strong) DXOrderTypeEnum *STOP NS_SWIFT_NAME(STOP);
@property (readonly, class, strong) DXOrderTypeEnum *STOP_LIMIT NS_SWIFT_NAME(STOP_LIMIT);
@property (readonly, class, strong) DXOrderTypeEnum *TRAIL_STOP NS_SWIFT_NAME(TRAIL_STOP);
@property (readonly, class, strong) DXOrderTypeEnum *TRAIL_STOP_LIMIT NS_SWIFT_NAME(TRAIL_STOP_LIMIT);

+ (DXOrderTypeEnum *)UNDEFINED;

+ (DXOrderTypeEnum *)CANCEL;

+ (DXOrderTypeEnum *)MARKET;

+ (DXOrderTypeEnum *)LIMIT;

+ (DXOrderTypeEnum *)STOP;

+ (DXOrderTypeEnum *)STOP_LIMIT;

+ (DXOrderTypeEnum *)TRAIL_STOP;

+ (DXOrderTypeEnum *)TRAIL_STOP_LIMIT;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderTypeEnum *)change;

- (DXOrderTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderTypeEnum)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, UNDEFINED, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_CANCEL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_CANCEL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, CANCEL, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_MARKET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_MARKET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, MARKET, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_LIMIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_LIMIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, LIMIT, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_STOP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_STOP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, STOP, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_STOP_LIMIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_STOP_LIMIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, STOP_LIMIT, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_TRAIL_STOP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_TRAIL_STOP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, TRAIL_STOP, DXOrderTypeEnum *)

inline DXOrderTypeEnum *DXOrderTypeEnum_get_TRAIL_STOP_LIMIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_TRAIL_STOP_LIMIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderTypeEnum, TRAIL_STOP_LIMIT, DXOrderTypeEnum *)

FOUNDATION_EXPORT void DXOrderTypeEnum_initWithNSString_withInt_(DXOrderTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderTypeEnum *new_DXOrderTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderTypeEnum *create_DXOrderTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderTypeEnum_init(DXOrderTypeEnum *self);

FOUNDATION_EXPORT DXOrderTypeEnum *new_DXOrderTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderTypeEnum *create_DXOrderTypeEnum_init(void);

FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderTypeEnum *DXOrderTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum DXOrderTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderTypeEnum")
