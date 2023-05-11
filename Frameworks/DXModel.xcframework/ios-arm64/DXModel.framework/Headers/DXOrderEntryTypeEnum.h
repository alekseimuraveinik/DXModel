
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEntryTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum || defined(INCLUDE_DXOrderEntryTypeEnum))
#define DXOrderEntryTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderEntryTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderEntryTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXOrderEntryTypeEnum *MARKET NS_SWIFT_NAME(MARKET);
@property (readonly, class, strong) DXOrderEntryTypeEnum *LIMIT NS_SWIFT_NAME(LIMIT);
@property (readonly, class, strong) DXOrderEntryTypeEnum *STOP NS_SWIFT_NAME(STOP);
@property (readonly, class, strong) DXOrderEntryTypeEnum *TRAIL_STOP NS_SWIFT_NAME(TRAIL_STOP);
@property (readonly, class, strong) DXOrderEntryTypeEnum *POSITION NS_SWIFT_NAME(POSITION);
@property (readonly, class, strong) DXOrderEntryTypeEnum *POSITION_CLOSE NS_SWIFT_NAME(POSITION_CLOSE);
@property (readonly, class, strong) DXOrderEntryTypeEnum *TAKE_PROFIT NS_SWIFT_NAME(TAKE_PROFIT);
@property (readonly, class, strong) DXOrderEntryTypeEnum *STOP_LOSS NS_SWIFT_NAME(STOP_LOSS);
@property (readonly, class, strong) DXOrderEntryTypeEnum *OCO NS_SWIFT_NAME(OCO);
@property (readonly, class, strong) DXOrderEntryTypeEnum *CASH_MARKET NS_SWIFT_NAME(CASH_MARKET);
@property (readonly, class, strong) DXOrderEntryTypeEnum *CASH_STOP NS_SWIFT_NAME(CASH_STOP);
@property (readonly, class, strong) DXOrderEntryTypeEnum *CASH_LIMIT NS_SWIFT_NAME(CASH_LIMIT);

+ (DXOrderEntryTypeEnum *)UNDEFINED;

+ (DXOrderEntryTypeEnum *)MARKET;

+ (DXOrderEntryTypeEnum *)LIMIT;

+ (DXOrderEntryTypeEnum *)STOP;

+ (DXOrderEntryTypeEnum *)TRAIL_STOP;

+ (DXOrderEntryTypeEnum *)POSITION;

+ (DXOrderEntryTypeEnum *)POSITION_CLOSE;

+ (DXOrderEntryTypeEnum *)TAKE_PROFIT;

+ (DXOrderEntryTypeEnum *)STOP_LOSS;

+ (DXOrderEntryTypeEnum *)OCO;

+ (DXOrderEntryTypeEnum *)CASH_MARKET;

+ (DXOrderEntryTypeEnum *)CASH_STOP;

+ (DXOrderEntryTypeEnum *)CASH_LIMIT;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderEntryTypeEnum *)change;

- (DXOrderEntryTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderEntryTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderEntryTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderEntryTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderEntryTypeEnum)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, UNDEFINED, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_MARKET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_MARKET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, MARKET, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_LIMIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_LIMIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, LIMIT, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_STOP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_STOP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, STOP, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_TRAIL_STOP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_TRAIL_STOP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, TRAIL_STOP, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_POSITION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_POSITION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, POSITION, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_POSITION_CLOSE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_POSITION_CLOSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, POSITION_CLOSE, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_TAKE_PROFIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_TAKE_PROFIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, TAKE_PROFIT, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_STOP_LOSS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_STOP_LOSS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, STOP_LOSS, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_OCO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_OCO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, OCO, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_CASH_MARKET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_CASH_MARKET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, CASH_MARKET, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_CASH_STOP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_CASH_STOP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, CASH_STOP, DXOrderEntryTypeEnum *)

inline DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_get_CASH_LIMIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_CASH_LIMIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEntryTypeEnum, CASH_LIMIT, DXOrderEntryTypeEnum *)

FOUNDATION_EXPORT void DXOrderEntryTypeEnum_initWithNSString_withInt_(DXOrderEntryTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderEntryTypeEnum *new_DXOrderEntryTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEntryTypeEnum *create_DXOrderEntryTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderEntryTypeEnum_init(DXOrderEntryTypeEnum *self);

FOUNDATION_EXPORT DXOrderEntryTypeEnum *new_DXOrderEntryTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEntryTypeEnum *create_DXOrderEntryTypeEnum_init(void);

FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderEntryTypeEnum *DXOrderEntryTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderEntryTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEntryTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum DXOrderEntryTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEntryTypeEnum")
