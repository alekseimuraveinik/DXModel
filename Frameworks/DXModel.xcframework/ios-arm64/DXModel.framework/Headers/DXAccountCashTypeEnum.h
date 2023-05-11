
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountCashTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum || defined(INCLUDE_DXAccountCashTypeEnum))
#define DXAccountCashTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAccountCashTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXAccountCashTypeEnum *UNKNOWN NS_SWIFT_NAME(UNKNOWN);
@property (readonly, class, strong) DXAccountCashTypeEnum *CASH NS_SWIFT_NAME(CASH);
@property (readonly, class, strong) DXAccountCashTypeEnum *MARGIN NS_SWIFT_NAME(MARGIN);

+ (DXAccountCashTypeEnum *)UNKNOWN;

+ (DXAccountCashTypeEnum *)CASH;

+ (DXAccountCashTypeEnum *)MARGIN;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAccountCashTypeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountCashTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAccountCashTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAccountCashTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXAccountCashTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAccountCashTypeEnum)

inline DXAccountCashTypeEnum *DXAccountCashTypeEnum_get_UNKNOWN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountCashTypeEnum *DXAccountCashTypeEnum_UNKNOWN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountCashTypeEnum, UNKNOWN, DXAccountCashTypeEnum *)

inline DXAccountCashTypeEnum *DXAccountCashTypeEnum_get_CASH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountCashTypeEnum *DXAccountCashTypeEnum_CASH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountCashTypeEnum, CASH, DXAccountCashTypeEnum *)

inline DXAccountCashTypeEnum *DXAccountCashTypeEnum_get_MARGIN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountCashTypeEnum *DXAccountCashTypeEnum_MARGIN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountCashTypeEnum, MARGIN, DXAccountCashTypeEnum *)

FOUNDATION_EXPORT void DXAccountCashTypeEnum_initWithNSString_withInt_(DXAccountCashTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAccountCashTypeEnum *new_DXAccountCashTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountCashTypeEnum *create_DXAccountCashTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAccountCashTypeEnum_init(DXAccountCashTypeEnum *self);

FOUNDATION_EXPORT DXAccountCashTypeEnum *new_DXAccountCashTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountCashTypeEnum *create_DXAccountCashTypeEnum_init(void);

FOUNDATION_EXPORT DXAccountCashTypeEnum *DXAccountCashTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAccountCashTypeEnum *DXAccountCashTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAccountCashTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountCashTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum DXAccountCashTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountCashTypeEnum")
