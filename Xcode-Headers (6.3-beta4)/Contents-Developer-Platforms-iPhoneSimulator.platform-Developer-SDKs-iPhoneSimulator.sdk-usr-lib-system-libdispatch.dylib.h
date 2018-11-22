//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/system/libdispatch.dylib
// UUID: 716445A7-6F4A-3576-A5D1-34B7C10F2242
//
//                           Arch: x86_64
//                Current version: 443.5.5
//          Compatibility version: 1.0.0
//                 Source version: 443.5.5.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol OS_dispatch_data <OS_dispatch_object>
@end

@protocol OS_dispatch_disk <OS_dispatch_object>
@end

@protocol OS_dispatch_group <OS_dispatch_object>
@end

@protocol OS_dispatch_io <OS_dispatch_object>
@end

@protocol OS_dispatch_mach <OS_dispatch_object>
@end

@protocol OS_dispatch_mach_msg <OS_dispatch_object>
@end

@protocol OS_dispatch_object
@end

@protocol OS_dispatch_operation <OS_dispatch_object>
@end

@protocol OS_dispatch_queue <OS_dispatch_object>
@end

@protocol OS_dispatch_queue_attr <OS_dispatch_object>
@end

@protocol OS_dispatch_queue_mgr <OS_dispatch_queue>
@end

@protocol OS_dispatch_queue_root <OS_dispatch_queue>
@end

@protocol OS_dispatch_queue_runloop <OS_dispatch_queue>
@end

@protocol OS_dispatch_queue_specific_queue <OS_dispatch_queue>
@end

@protocol OS_dispatch_semaphore <OS_dispatch_object>
@end

@protocol OS_dispatch_source <OS_dispatch_object>
@end

@protocol OS_voucher
@end

@interface OS_object : NSObject
{
}

- (void)_dispose;
- (void)_xref_dispose;
- (_Bool)allowsWeakReference;
- (_Bool)retainWeakReference;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_object : OS_object <OS_dispatch_object>
{
}

- (id)debugDescription;
- (void)_dispose;
- (void)_xref_dispose;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_queue : OS_dispatch_object <OS_dispatch_queue>
{
}

+ (void)load;
- (id)description;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_source>
{
}

+ (void)load;
- (void)_xref_dispose;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_queue_runloop : OS_dispatch_queue <OS_dispatch_queue_runloop>
{
}

+ (void)load;
- (void)_xref_dispose;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_semaphore : OS_dispatch_object <OS_dispatch_semaphore>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_group : OS_dispatch_object <OS_dispatch_group>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_queue_root : OS_dispatch_queue <OS_dispatch_queue_root>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_queue_mgr : OS_dispatch_queue <OS_dispatch_queue_mgr>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_queue_specific_queue : OS_dispatch_object <OS_dispatch_queue_specific_queue>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_queue_attr : OS_dispatch_object <OS_dispatch_queue_attr>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_mach : OS_dispatch_object <OS_dispatch_mach>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_mach_msg : OS_dispatch_object <OS_dispatch_mach_msg>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_io : OS_dispatch_object <OS_dispatch_io>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_operation : OS_dispatch_object <OS_dispatch_operation>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_disk : OS_dispatch_object <OS_dispatch_disk>
{
}

+ (void)load;

@end

__attribute__((visibility("hidden")))
@interface OS_voucher : OS_object <OS_voucher>
{
}

+ (void)load;
- (id)debugDescription;
- (void)_dispose;
- (void)_xref_dispose;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_data : NSObject <OS_dispatch_data>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)_setTargetQueue:(id)arg1;
- (void)_setFinalizer:(CDUnknownFunctionPointerType)arg1;
- (void *)_getContext;
- (void)_setContext:(void *)arg1;
- (_Bool)_bytesAreVM;
- (void)finalize;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface OS_dispatch_data_empty : OS_dispatch_data
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)load;
- (void)_setTargetQueue:(id)arg1;
- (void)_setFinalizer:(CDUnknownFunctionPointerType)arg1;
- (void *)_getContext;
- (void)_setContext:(void *)arg1;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;

@end

