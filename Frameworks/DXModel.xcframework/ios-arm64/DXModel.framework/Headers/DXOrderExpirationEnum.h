
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderExpirationEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum || defined(INCLUDE_DXOrderExpirationEnum))
#define DXOrderExpirationEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderExpirationEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderExpirationEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXOrderExpirationEnum *DAY NS_SWIFT_NAME(DAY);
@property (readonly, class, strong) DXOrderExpirationEnum *GTC NS_SWIFT_NAME(GTC);
@property (readonly, class, strong) DXOrderExpirationEnum *IOC NS_SWIFT_NAME(IOC);
@property (readonly, class, strong) DXOrderExpirationEnum *FOK NS_SWIFT_NAME(FOK);
@property (readonly, class, strong) DXOrderExpirationEnum *GTD NS_SWIFT_NAME(GTD);
@property (readonly, class, strong) DXOrderExpirationEnum *SESSION NS_SWIFT_NAME(SESSION);
@property (readonly, class, strong) DXOrderExpirationEnum *FAK NS_SWIFT_NAME(FAK);
@property (readonly, class, strong) DXOrderExpirationEnum *KEEP_REMAINDER NS_SWIFT_NAME(KEEP_REMAINDER);
@property (readonly, class, strong) DXOrderExpirationEnum *CONDITIONAL NS_SWIFT_NAME(CONDITIONAL);

+ (DXOrderExpirationEnum *)UNDEFINED;

+ (DXOrderExpirationEnum *)DAY;

+ (DXOrderExpirationEnum *)GTC;

+ (DXOrderExpirationEnum *)IOC;

+ (DXOrderExpirationEnum *)FOK;

+ (DXOrderExpirationEnum *)GTD;

+ (DXOrderExpirationEnum *)SESSION;

+ (DXOrderExpirationEnum *)FAK;

+ (DXOrderExpirationEnum *)KEEP_REMAINDER;

+ (DXOrderExpirationEnum *)CONDITIONAL;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderExpirationEnum *)change;

- (DXOrderExpirationEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderExpirationEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderExpirationEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderExpirationEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderExpirationEnum)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, UNDEFINED, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_DAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_DAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, DAY, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_GTC(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_GTC;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, GTC, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_IOC(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_IOC;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, IOC, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_FOK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_FOK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, FOK, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_GTD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_GTD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, GTD, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_SESSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_SESSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, SESSION, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_FAK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_FAK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, FAK, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_KEEP_REMAINDER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_KEEP_REMAINDER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, KEEP_REMAINDER, DXOrderExpirationEnum *)

inline DXOrderExpirationEnum *DXOrderExpirationEnum_get_CONDITIONAL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_CONDITIONAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderExpirationEnum, CONDITIONAL, DXOrderExpirationEnum *)

FOUNDATION_EXPORT void DXOrderExpirationEnum_initWithNSString_withInt_(DXOrderExpirationEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderExpirationEnum *new_DXOrderExpirationEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderExpirationEnum *create_DXOrderExpirationEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderExpirationEnum_init(DXOrderExpirationEnum *self);

FOUNDATION_EXPORT DXOrderExpirationEnum *new_DXOrderExpirationEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderExpirationEnum *create_DXOrderExpirationEnum_init(void);

FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderExpirationEnum *DXOrderExpirationEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderExpirationEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderExpirationEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum DXOrderExpirationEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderExpirationEnum")
