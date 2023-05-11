
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderStatusEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum || defined(INCLUDE_DXOrderStatusEnum))
#define DXOrderStatusEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderStatusEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderStatusEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXOrderStatusEnum *SENDING NS_SWIFT_NAME(SENDING);
@property (readonly, class, strong) DXOrderStatusEnum *PENDING NS_SWIFT_NAME(PENDING);
@property (readonly, class, strong) DXOrderStatusEnum *WORKING NS_SWIFT_NAME(WORKING);
@property (readonly, class, strong) DXOrderStatusEnum *CANCELING NS_SWIFT_NAME(CANCELING);
@property (readonly, class, strong) DXOrderStatusEnum *CANCELED NS_SWIFT_NAME(CANCELED);
@property (readonly, class, strong) DXOrderStatusEnum *FILLED NS_SWIFT_NAME(FILLED);
@property (readonly, class, strong) DXOrderStatusEnum *REJECTED NS_SWIFT_NAME(REJECTED);
@property (readonly, class, strong) DXOrderStatusEnum *EXPIRED NS_SWIFT_NAME(EXPIRED);
@property (readonly, class, strong) DXOrderStatusEnum *EXECUTING NS_SWIFT_NAME(EXECUTING);

+ (DXOrderStatusEnum *)UNDEFINED;

+ (DXOrderStatusEnum *)SENDING;

+ (DXOrderStatusEnum *)PENDING;

+ (DXOrderStatusEnum *)WORKING;

+ (DXOrderStatusEnum *)CANCELING;

+ (DXOrderStatusEnum *)CANCELED;

+ (DXOrderStatusEnum *)FILLED;

+ (DXOrderStatusEnum *)REJECTED;

+ (DXOrderStatusEnum *)EXPIRED;

+ (DXOrderStatusEnum *)EXECUTING;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderStatusEnum *)change;

- (DXOrderStatusEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderStatusEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderStatusEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderStatusEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderStatusEnum)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, UNDEFINED, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_SENDING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_SENDING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, SENDING, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_PENDING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_PENDING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, PENDING, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_WORKING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_WORKING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, WORKING, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_CANCELING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_CANCELING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, CANCELING, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_CANCELED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_CANCELED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, CANCELED, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_FILLED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_FILLED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, FILLED, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, REJECTED, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_EXPIRED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_EXPIRED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, EXPIRED, DXOrderStatusEnum *)

inline DXOrderStatusEnum *DXOrderStatusEnum_get_EXECUTING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_EXECUTING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderStatusEnum, EXECUTING, DXOrderStatusEnum *)

FOUNDATION_EXPORT void DXOrderStatusEnum_initWithNSString_withInt_(DXOrderStatusEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderStatusEnum *new_DXOrderStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderStatusEnum *create_DXOrderStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderStatusEnum_init(DXOrderStatusEnum *self);

FOUNDATION_EXPORT DXOrderStatusEnum *new_DXOrderStatusEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderStatusEnum *create_DXOrderStatusEnum_init(void);

FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderStatusEnum *DXOrderStatusEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderStatusEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderStatusEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum DXOrderStatusEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderStatusEnum")
