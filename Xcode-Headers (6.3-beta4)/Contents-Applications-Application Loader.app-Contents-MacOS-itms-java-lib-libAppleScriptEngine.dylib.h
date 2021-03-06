//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/MacOS/itms/java/lib/libAppleScriptEngine.dylib
// UUID: 557CE661-ADDD-32CE-BF1E-2D85E9A4419C
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//       Minimum Mac OS X version: 10.6.0
//                    SDK version: 10.6.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/.
//                               = /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/MacOS/itms/java/lib
//

@protocol JNFTypeCoercion
- (struct _jobject *)coerceNSObject:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;
- (id)coerceJavaObject:(struct _jobject *)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;
@end

@interface AppleScriptExecutionContext : NSObject
{
    NSString *source;
    BOOL isFile;
    NSDictionary *context;
    NSDictionary *error;
    id returnValue;
}

- (id)init:(id)arg1 context:(id)arg2;
- (id)initWithSource:(id)arg1 context:(id)arg2;
- (id)initWithFile:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)scriptFromURL;
- (id)scriptFromSource;
- (id)functionInvocationEvent;
- (void)invoke;
- (id)invokeWithEnv:(const struct JNINativeInterface_ **)arg1;
@property(retain, nonatomic) id returnValue; // @synthesize returnValue;
@property(retain, nonatomic) NSDictionary *error; // @synthesize error;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context;
@property(retain, nonatomic) NSString *source; // @synthesize source;

@end

@interface JavaAppleScriptNullConverter : NSObject <JNFTypeCoercion>
{
}

- (struct _jobject *)coerceNSObject:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;
- (id)coerceJavaObject:(struct _jobject *)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;

@end

@interface JavaAppleScriptVersionConverter : NSObject <JNFTypeCoercion>
{
}

- (struct _jobject *)coerceNSObject:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;
- (id)coerceJavaObject:(struct _jobject *)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;

@end

@interface JavaAppleScriptImageConverter : NSObject <JNFTypeCoercion>
{
}

- (struct _jobject *)coerceNSObject:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;
- (id)coerceJavaObject:(struct _jobject *)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;

@end

@interface JavaAppleScriptBaseConverter : NSObject <JNFTypeCoercion>
{
}

- (struct _jobject *)coerceNSObject:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;
- (id)coerceJavaObject:(struct _jobject *)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 usingCoercer:(id)arg3;

@end

@interface JavaAppleScriptEngineCoercion : NSObject
{
}

+ (id)coercer;

@end

@interface NSAppleEventDescriptor (JavaAppleScriptEngineAdditions)
+ (void)registerConversionHandler:(id)arg1 selector:(SEL)arg2 forDescriptorTypes:(unsigned int)arg3;
+ (id)descriptorWithInt16:(short)arg1;
+ (id)descriptorWithUnsignedInt32:(unsigned int)arg1;
+ (id)descriptorWithFloat32:(float)arg1;
+ (id)descriptorWithFloat64:(double)arg1;
+ (id)descriptorWithLongDateTime:(long long)arg1;
+ (void)jaseSetUpHandlerDict;
- (id)objCObjectValue;
- (id)aeDescriptorValue;
- (short)int16Value;
- (unsigned int)unsignedInt32Value;
- (float)float32Value;
- (double)float64Value;
- (long long)longDateTimeValue;
@end

@interface NSImage (JavaAppleScriptEngineAdditions)
+ (id)imageWithAEDesc:(id)arg1;
- (id)aeDescriptorValue;
@end

@interface NSValue (JavaAppleScriptEngineAdditions)
- (id)aeDescriptorValue;
@end

@interface NSNumber (JavaAppleScriptEngineAdditions)
+ (id)numberWithAEDesc:(id)arg1;
+ (id)jaseNumberWithSignedIntP:(void *)arg1 byteCount:(int)arg2;
+ (id)jaseNumberWithUnsignedIntP:(void *)arg1 byteCount:(int)arg2;
+ (id)jaseNumberWithFloatP:(void *)arg1 byteCount:(int)arg2;
- (id)jaseDescriptorValueWithFloatP:(void *)arg1 byteCount:(int)arg2;
- (id)jaseDescriptorValueWithSignedIntP:(void *)arg1 byteCount:(int)arg2;
- (id)jaseDescriptorValueWithUnsignedIntP:(void *)arg1 byteCount:(int)arg2;
- (id)aeDescriptorValue;
@end

@interface NSDate (JavaAppleScriptEngineAdditions)
+ (id)dateWithAEDesc:(id)arg1;
- (id)aeDescriptorValue;
@end

@interface NSNull (JavaAppleScriptEngineAdditions)
+ (id)nullWithAEDesc:(id)arg1;
- (id)aeDescriptorValue;
@end

@interface NSString (JavaAppleScriptEngineAdditions)
+ (id)stringWithAEDesc:(id)arg1;
+ (id)versionWithAEDesc:(id)arg1;
- (id)aeDescriptorValue;
@end

@interface NSDictionary (JavaAppleScriptEngineAdditions)
+ (id)dictionaryWithAEDesc:(id)arg1;
- (id)aeDescriptorValue;
@end

@interface NSArray (JavaAppleScriptEngineAdditions)
+ (id)arrayWithAEDesc:(id)arg1;
@end

@interface NSObject (JavaAppleScriptEngineAdditions)
- (id)aeDescriptorValue;
@end

