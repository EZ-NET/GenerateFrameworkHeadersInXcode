//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift/macosx/libswiftXCTest.dylib
// UUID: 5B883772-6485-3008-A6C1-FC72D4808124
//
//                           Arch: x86_64
//                Current version: 0.0.0
//          Compatibility version: 0.0.0
//                 Source version: 600.0.57.4.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol _TtPSs16_CocoaStringType_
@end

@protocol _TtPSs19_SwiftNSCopyingType_
- (id)copyWithZone:(void *)arg1;
@end

@protocol _TtPSs27_SwiftNSFastEnumerationType_
- (long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(long long)arg3;
@end

@protocol _TtPSs34_SwiftNSArrayRequiredOverridesType_ <_TtPSs19_SwiftNSCopyingType_, _TtPSs27_SwiftNSFastEnumerationType_>
@property(nonatomic, readonly) long long count;
- (id)copyWithZone:(void *)arg1;
- (long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(long long)arg3;
- (void)getObjects:(id *)arg1 range:(CDStruct_912cb5d2)arg2;
- (id)objectAtIndex:(long long)arg1;
@end

@protocol _TtPSs9AnyObject_
@end

@interface XCTestCase (SwiftAdditions)
- (id)className;
@end

