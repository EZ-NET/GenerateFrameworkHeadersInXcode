//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct GlyphStack {
    long long _field1;
    long long _field2;
    struct GlyphStackEntry _field3[1];
};

struct GlyphStackEntry {
    unsigned short _field1;
    struct CGSize _field2;
    unsigned int _field3;
    long long _field4;
    unsigned char _field5;
};

struct StrikeMetrics {
    double _field1;
    double _field2;
    double _field3;
    unsigned int _field4;
    struct CGPoint _field5;
    struct CGRect _field6;
    _Bool _field7;
};

struct TBMPDataCache;

struct TBaseFont {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct TCFRef<const __CFData *> _field3;
    struct TCFRef<const __CFData *> _field4;
    struct TCFRef<const __CFData *> _field5;
    struct TCFRef<const __CFData *> _field6;
    struct TCFRef<const __CFData *> _field7;
    struct TCFRef<const __CFData *> _field8;
    struct TCFRef<const __CFData *> _field9;
    struct TCFRef<const __CFData *> _field10;
    struct TCFRef<const __CFURL *> _field11;
    int _field12;
    struct TCFRef<__CFDictionary *> _field13;
    struct TCFRef<const __CFArray *> _field14;
    struct TCFRef<const __CFCharacterSet *> _field15;
    struct TCFRef<const __CFArray *> _field16;
    struct TCFRef<const __CFCharacterSet *> _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    struct TCFRef<const __CFCharacterSet *> _field21;
    struct TCFRef<const __CFData *> _field22;
    long long _field23;
    struct TBMPDataCache *_field24;
    struct unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short>>> *_field25;
    struct TTraitsValues *_field26;
    unsigned short _field27;
    struct UnscaledAdvancesPage *_field28;
    struct StrikeMetrics _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    struct TMutex _field33;
    struct TInlineVector<TCFRef<const __CFData *>, 4> _field34;
    struct array<TCFRef<__CFDictionary *>, 7> _field35;
};

struct TCFRef<__CFDictionary *> {
    struct __CFDictionary *_field1;
};

struct TCFRef<const __CFArray *> {
    struct __CFArray *fRef;
};

struct TCFRef<const __CFCharacterSet *> {
    struct __CFCharacterSet *_field1;
};

struct TCFRef<const __CFData *> {
    struct __CFData *_field1;
};

struct TCFRef<const __CFSet *> {
    struct __CFSet *fRef;
};

struct TCFRef<const __CFURL *> {
    struct __CFURL *_field1;
};

struct TInlineBufferAllocator<TCFRef<const __CFData *>, 4> {
    struct type _field1;
    struct TCFRef<const __CFData *> *_field2;
};

struct TInlineVector<TCFRef<const __CFData *>, 4> {
    struct TCFRef<const __CFData *> *_field1;
    struct TCFRef<const __CFData *> *_field2;
    struct __compressed_pair<TCFRef<const __CFData *>*, TInlineBufferAllocator<TCFRef<const __CFData *>, 4>> {
        struct TCFRef<const __CFData *> *_field1;
        struct TInlineBufferAllocator<TCFRef<const __CFData *>, 4> _field2;
    } _field3;
};

struct TMutex {
    id _field1;
};

struct TTraitsValues;

struct UnscaledAdvancesPage;

struct array<TCFRef<__CFDictionary *>, 7> {
    struct TCFRef<__CFDictionary *> _field1[7];
};

struct type {
    unsigned char _field1[32];
};

struct unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short>>>;

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
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreText.framework/CoreText
// UUID: 06A8B768-36D1-385C-B365-0D2170AF57CC
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 451.6.2.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@protocol _CTGlyphStorageAdvanceLookup
- (struct CGSize)customAdvanceForIndex:(long long)arg1;
@end

__attribute__((visibility("hidden")))
@interface _CTGlyphStorage : NSObject
{
    long long _count;
    const unsigned short *_glyphs;
    const struct CGSize *_advances;
    const unsigned int *_props;
    const long long *_stringIndices;
}

- (void)disposeGlyphStack;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)sync;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (void *)refCon;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCount:(long long)arg1;

@end

__attribute__((visibility("hidden")))
@interface CTFeatureSetting : NSDictionary
{
    NSDictionary *_dictionary;
}

- (_Bool)isEqualToFeatureSetting:(id)arg1;
- (_Bool)isEqualToDictionary:(id)arg1;
- (id)value;
- (id)tag;
- (id)selector;
- (id)type;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNormalizedDictionary:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage : _CTGlyphStorage
{
    const long long *_attachCounts;
    unsigned long long _retainCount;
    struct GlyphStack *_stack;
    long long _capacity;
    void *_preallocatedStorage;
}

+ (id)newWithCount:(long long)arg1;
- (void)setCapacity:(long long)arg1;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (const long long *)stringIndices;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (id)initWithCount:(long long)arg1;
- (void)prepareWithCapacity:(long long)arg1 preallocated:(_Bool)arg2;

@end

__attribute__((visibility("hidden")))
@interface _CTGCommonCache : NSObject
{
    void *_cacheBytes[30];
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup>
{
    CTGlyphStorageInterface *_interface;
}

- (void)disposeGlyphStack;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)sync;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (struct CGSize)customAdvanceForIndex:(long long)arg1;
- (void *)refCon;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (id)initWithInterface:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface _CTFontFallbacksArray : NSArray
{
    int _lock;
    const struct TBaseFont *_baseFont;
    unsigned long long _count;
    NSArray *_cascade;
    NSMutableArray *_fallbacks;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithBaseFont:(const struct TBaseFont *)arg1 cascade:(id)arg2;

@end

@interface CTGlyphStorageInterface : NSObject
{
    long long _glyphCount;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    unsigned int *_props;
    long long *_stringIndexes;
    long long *_absorbedCounts;
}

- (void)disposeGlyphStack;
- (void)popGlyph:(long long)arg1;
- (void)pushGlyph:(long long)arg1;
- (void)initGlyphStack:(long long)arg1;
- (void)insertGlyphs:(CDStruct_912cb5d2)arg1;
- (void)moveGlyphsTo:(long long)arg1 from:(CDStruct_912cb5d2)arg2;
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;
- (void)getCustomAdvance:(struct CGSize *)arg1 forIndex:(long long)arg2;
- (struct __CTGlyphStorage *)createCopy:(CDStruct_912cb5d2)arg1;

@end

__attribute__((visibility("hidden")))
@interface NSRubyAnnotation : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

__attribute__((visibility("hidden")))
@interface NSCTRubyAnnotation : NSRubyAnnotation
{
}

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;
- (void)finalize;
- (unsigned long long)retainCount;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end

__attribute__((visibility("hidden")))
@interface FontAssetDownloadManager : NSObject
{
    struct TCFRef<const __CFArray *> fDescriptors;
    struct TCFRef<const __CFSet *> fMandatoryAttributes;
    CDUnknownBlockType fProgressCallbackBlock;
    NSMutableDictionary *fProgressParams;
    NSMutableDictionary *fDownloadOptions;
    NSSet *fPreciousFontLanguages;
}

+ (id)availableFontAttributesArray;
+ (id)displayNameForCurrentUser:(id)arg1;
+ (id)enabledKeyboardLanguages;
+ (Class)getASAssetQueryClass;
+ (_Bool)shouldRetryWithServer;
+ (_Bool)shouldTryServer;
+ (_Bool)shouldIgnoreFontAsset:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)preciousFontLanguages;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (_Bool)activateFontsFromAssetURL:(id)arg1;
- (id)doFinalMatching;
- (_Bool)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3;
- (_Bool)assetStalled:(id)arg1;
- (unsigned long long)calculateDownloadSize:(id)arg1;
- (id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2;
- (id)extractMatchingAssetsForDescriptor:(struct __CTFontDescriptor *)arg1 from:(id)arg2 withFailInfo:(_Bool *)arg3 andFontFilePaths:(id)arg4;
- (id)availableMobileAssets:(_Bool)arg1 error:(id *)arg2;
- (id)getUnmatchedDescriptors;
- (void)downloadFontAssets;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;
- (_Bool)callProgressCallbak:(unsigned int)arg1;
- (void)setDownloadOptionsForMobileAsset;
- (void)dealloc;
- (id)initWithDescriptors:(struct __CFArray *)arg1 andMandatoryAttributes:(struct __CFSet *)arg2 withBlock:(CDUnknownBlockType)arg3;

@end

