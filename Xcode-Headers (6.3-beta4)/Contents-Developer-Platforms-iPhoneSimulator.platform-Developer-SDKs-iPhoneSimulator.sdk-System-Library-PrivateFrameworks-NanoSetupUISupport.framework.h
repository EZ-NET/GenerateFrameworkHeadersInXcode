//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/NanoSetupUISupport.framework/NanoSetupUISupport
// UUID: F6AB3D20-1A00-3455-85D4-0189D4240224
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 251.4.10.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface NSUIMaterialManager : NSObject
{
    unsigned long long _material;
}

+ (id)sharedManager;
@property(nonatomic) unsigned long long material; // @synthesize material=_material;

@end

@interface NSUIDeviceTintedLabel : UILabel
{
}

- (void)layoutSubviews;
- (id)gradientImage;

@end

