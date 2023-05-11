
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStopTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum || defined(INCLUDE_DXStopTypeEnum))
#define DXStopTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXStopTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXStopTypeEnum *DEFAULT NS_SWIFT_NAME(DEFAULT);
@property (readonly, class, strong) DXStopTypeEnum *BID NS_SWIFT_NAME(BID);
@property (readonly, class, strong) DXStopTypeEnum *ASK NS_SWIFT_NAME(ASK);

+ (DXStopTypeEnum *)DEFAULT;

+ (DXStopTypeEnum *)BID;

+ (DXStopTypeEnum *)ASK;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXStopTypeEnum *)change;

- (DXStopTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXStopTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXStopTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXStopTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXStopTypeEnum)

inline DXStopTypeEnum *DXStopTypeEnum_get_DEFAULT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopTypeEnum *DXStopTypeEnum_DEFAULT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopTypeEnum, DEFAULT, DXStopTypeEnum *)

inline DXStopTypeEnum *DXStopTypeEnum_get_BID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopTypeEnum *DXStopTypeEnum_BID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopTypeEnum, BID, DXStopTypeEnum *)

inline DXStopTypeEnum *DXStopTypeEnum_get_ASK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStopTypeEnum *DXStopTypeEnum_ASK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStopTypeEnum, ASK, DXStopTypeEnum *)

FOUNDATION_EXPORT void DXStopTypeEnum_initWithNSString_withInt_(DXStopTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXStopTypeEnum *new_DXStopTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopTypeEnum *create_DXStopTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXStopTypeEnum_init(DXStopTypeEnum *self);

FOUNDATION_EXPORT DXStopTypeEnum *new_DXStopTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStopTypeEnum *create_DXStopTypeEnum_init(void);

FOUNDATION_EXPORT DXStopTypeEnum *DXStopTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXStopTypeEnum *DXStopTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXStopTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStopTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderStopTypeEnum DXStopTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderStopTypeEnum")
