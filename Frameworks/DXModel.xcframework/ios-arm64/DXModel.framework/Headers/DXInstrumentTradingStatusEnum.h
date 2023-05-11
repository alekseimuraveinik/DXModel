
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTradingStatusEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum || defined(INCLUDE_DXInstrumentTradingStatusEnum))
#define DXInstrumentTradingStatusEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXInstrumentTradingStatusEnum : PSBaseEnum
@property (readonly, class, strong) DXInstrumentTradingStatusEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXInstrumentTradingStatusEnum *OPENED NS_SWIFT_NAME(OPENED);
@property (readonly, class, strong) DXInstrumentTradingStatusEnum *CLOSED NS_SWIFT_NAME(CLOSED);
@property (readonly, class, strong) DXInstrumentTradingStatusEnum *CLOSE_ONLY NS_SWIFT_NAME(CLOSE_ONLY);

+ (DXInstrumentTradingStatusEnum *)UNDEFINED;

+ (DXInstrumentTradingStatusEnum *)OPENED;

+ (DXInstrumentTradingStatusEnum *)CLOSED;

+ (DXInstrumentTradingStatusEnum *)CLOSE_ONLY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXInstrumentTradingStatusEnum *)change;

- (DXInstrumentTradingStatusEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXInstrumentTradingStatusEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXInstrumentTradingStatusEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXInstrumentTradingStatusEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXInstrumentTradingStatusEnum)

inline DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTradingStatusEnum, UNDEFINED, DXInstrumentTradingStatusEnum *)

inline DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_get_OPENED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_OPENED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTradingStatusEnum, OPENED, DXInstrumentTradingStatusEnum *)

inline DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_get_CLOSED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_CLOSED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTradingStatusEnum, CLOSED, DXInstrumentTradingStatusEnum *)

inline DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_get_CLOSE_ONLY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_CLOSE_ONLY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTradingStatusEnum, CLOSE_ONLY, DXInstrumentTradingStatusEnum *)

FOUNDATION_EXPORT void DXInstrumentTradingStatusEnum_initWithNSString_withInt_(DXInstrumentTradingStatusEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *new_DXInstrumentTradingStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *create_DXInstrumentTradingStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXInstrumentTradingStatusEnum_init(DXInstrumentTradingStatusEnum *self);

FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *new_DXInstrumentTradingStatusEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *create_DXInstrumentTradingStatusEnum_init(void);

FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXInstrumentTradingStatusEnum *DXInstrumentTradingStatusEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXInstrumentTradingStatusEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTradingStatusEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum DXInstrumentTradingStatusEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTradingStatusEnum")
