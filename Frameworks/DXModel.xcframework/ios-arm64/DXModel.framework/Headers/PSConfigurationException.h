
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConfigurationException")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolConfigurationException
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConfigurationException 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConfigurationException 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolConfigurationException

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConfigurationException_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConfigurationException || defined(INCLUDE_PSConfigurationException))
#define PSConfigurationException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface PSConfigurationException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)message;

- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConfigurationException)

FOUNDATION_EXPORT void PSConfigurationException_initWithNSString_(PSConfigurationException *self, NSString *message);

FOUNDATION_EXPORT PSConfigurationException *new_PSConfigurationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConfigurationException *create_PSConfigurationException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void PSConfigurationException_initWithNSString_withJavaLangThrowable_(PSConfigurationException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSConfigurationException *new_PSConfigurationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConfigurationException *create_PSConfigurationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void PSConfigurationException_initWithJavaLangThrowable_(PSConfigurationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT PSConfigurationException *new_PSConfigurationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConfigurationException *create_PSConfigurationException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(PSConfigurationException)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolConfigurationException PSConfigurationException;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolConfigurationException")
