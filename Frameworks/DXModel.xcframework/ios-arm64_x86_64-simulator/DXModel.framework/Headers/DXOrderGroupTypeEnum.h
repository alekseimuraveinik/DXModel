
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderGroupTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum || defined(INCLUDE_DXOrderGroupTypeEnum))
#define DXOrderGroupTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderGroupTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderGroupTypeEnum *UNKNOWN NS_SWIFT_NAME(UNKNOWN);
@property (readonly, class, strong) DXOrderGroupTypeEnum *SINGLE NS_SWIFT_NAME(SINGLE);
@property (readonly, class, strong) DXOrderGroupTypeEnum *IF_THEN NS_SWIFT_NAME(IF_THEN);
@property (readonly, class, strong) DXOrderGroupTypeEnum *OCO NS_SWIFT_NAME(OCO);
@property (readonly, class, strong) DXOrderGroupTypeEnum *IF_THEN_OCO NS_SWIFT_NAME(IF_THEN_OCO);

+ (DXOrderGroupTypeEnum *)UNKNOWN;

+ (DXOrderGroupTypeEnum *)SINGLE;

+ (DXOrderGroupTypeEnum *)IF_THEN;

+ (DXOrderGroupTypeEnum *)OCO;

+ (DXOrderGroupTypeEnum *)IF_THEN_OCO;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderGroupTypeEnum *)change;

- (DXOrderGroupTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderGroupTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderGroupTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderGroupTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderGroupTypeEnum)

inline DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_get_UNKNOWN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_UNKNOWN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupTypeEnum, UNKNOWN, DXOrderGroupTypeEnum *)

inline DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_get_SINGLE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_SINGLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupTypeEnum, SINGLE, DXOrderGroupTypeEnum *)

inline DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_get_IF_THEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_IF_THEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupTypeEnum, IF_THEN, DXOrderGroupTypeEnum *)

inline DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_get_OCO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_OCO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupTypeEnum, OCO, DXOrderGroupTypeEnum *)

inline DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_get_IF_THEN_OCO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_IF_THEN_OCO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupTypeEnum, IF_THEN_OCO, DXOrderGroupTypeEnum *)

FOUNDATION_EXPORT void DXOrderGroupTypeEnum_initWithNSString_withInt_(DXOrderGroupTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderGroupTypeEnum *new_DXOrderGroupTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderGroupTypeEnum *create_DXOrderGroupTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderGroupTypeEnum_init(DXOrderGroupTypeEnum *self);

FOUNDATION_EXPORT DXOrderGroupTypeEnum *new_DXOrderGroupTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderGroupTypeEnum *create_DXOrderGroupTypeEnum_init(void);

FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderGroupTypeEnum *DXOrderGroupTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderGroupTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderGroupTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum DXOrderGroupTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupTypeEnum")
