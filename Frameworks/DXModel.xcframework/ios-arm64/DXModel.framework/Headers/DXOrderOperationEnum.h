
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderOperationEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum || defined(INCLUDE_DXOrderOperationEnum))
#define DXOrderOperationEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderOperationEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderOperationEnum *BUY NS_SWIFT_NAME(BUY);
@property (readonly, class, strong) DXOrderOperationEnum *SELL NS_SWIFT_NAME(SELL);
@property (readonly, class, strong) DXOrderOperationEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);

+ (DXOrderOperationEnum *)BUY;

+ (DXOrderOperationEnum *)SELL;

+ (DXOrderOperationEnum *)UNDEFINED;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderOperationEnum *)change;

- (DXOrderOperationEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderOperationEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderOperationEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderOperationEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderOperationEnum)

inline DXOrderOperationEnum *DXOrderOperationEnum_get_BUY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderOperationEnum *DXOrderOperationEnum_BUY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderOperationEnum, BUY, DXOrderOperationEnum *)

inline DXOrderOperationEnum *DXOrderOperationEnum_get_SELL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderOperationEnum *DXOrderOperationEnum_SELL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderOperationEnum, SELL, DXOrderOperationEnum *)

inline DXOrderOperationEnum *DXOrderOperationEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderOperationEnum *DXOrderOperationEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderOperationEnum, UNDEFINED, DXOrderOperationEnum *)

FOUNDATION_EXPORT void DXOrderOperationEnum_initWithNSString_withInt_(DXOrderOperationEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderOperationEnum *new_DXOrderOperationEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderOperationEnum *create_DXOrderOperationEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderOperationEnum_init(DXOrderOperationEnum *self);

FOUNDATION_EXPORT DXOrderOperationEnum *new_DXOrderOperationEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderOperationEnum *create_DXOrderOperationEnum_init(void);

FOUNDATION_EXPORT DXOrderOperationEnum *DXOrderOperationEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderOperationEnum *DXOrderOperationEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderOperationEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderOperationEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum DXOrderOperationEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderOperationEnum")
