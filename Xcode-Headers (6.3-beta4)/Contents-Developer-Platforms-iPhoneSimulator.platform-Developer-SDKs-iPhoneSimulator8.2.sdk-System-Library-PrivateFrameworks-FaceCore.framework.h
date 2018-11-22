//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FaceCoreAPI {
    CDUnknownFunctionPointerType *_field1;
    struct FaceCoreAPIInternal *_field2;
    struct FaceCoreContext *_field3;
    void *_field4;
};

struct FaceCoreAPIInternal;

struct FaceCoreContext;

struct coord {
    int _field1;
    int _field2;
};

struct face {
    int _field1;
    struct coord _field2;
    struct coord _field3;
    struct coord _field4;
    struct coord _field5;
    float _field6;
    int _field7;
    int _field8;
    struct vector<double, std::__1::allocator<double>> _field9;
    int _field10;
    vector_88fc712c _field11;
    int _field12;
    _Bool _field13;
    _Bool _field14;
    float _field15;
    float _field16;
    _Bool _field17;
    float _field18;
    _Bool _field19;
    float _field20;
    struct naturalSmileData *_field21;
};

struct image {
    char *_field1;
    int _field2;
    int _field3;
};

struct naturalSmileData;

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
};

struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord>> {
    struct coord *_field1;
    struct coord *_field2;
    struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord>> {
        struct coord *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct CGPoint center;
    struct CGRect bounds;
} CDStruct_ac082cae;

// Template types
typedef struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord>> {
    struct coord *_field1;
    struct coord *_field2;
    struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord>> {
        struct coord *_field1;
    } _field3;
} vector_88fc712c;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
// UUID: B35C95D4-C225-3563-A4C5-4021408C2384
//
//                           Arch: x86_64
//                Current version: 3.1.6
//          Compatibility version: 1.0.0
//                 Source version: 3.1.6.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface FCRFace : NSObject
{
    CDStruct_ac082cae face;
    CDStruct_ac082cae leftEye;
    CDStruct_ac082cae rightEye;
    CDStruct_ac082cae mouth;
    double faceSize;
    double faceAngle;
    long long trackID;
    unsigned long long trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property(retain) NSDictionary *additionalInfo; // @synthesize additionalInfo;
@property long long trackID; // @synthesize trackID;
@property unsigned long long trackDuration; // @synthesize trackDuration;
@property CDStruct_ac082cae rightEye; // @synthesize rightEye;
@property CDStruct_ac082cae mouth; // @synthesize mouth;
@property CDStruct_ac082cae leftEye; // @synthesize leftEye;
@property(retain) NSData *faceprint; // @synthesize faceprint;
@property int faceType; // @synthesize faceType;
@property double faceSize; // @synthesize faceSize;
@property(retain) NSDictionary *faceLandmarkPoints; // @synthesize faceLandmarkPoints;
@property CDStruct_ac082cae face; // @synthesize face;
@property double faceAngle; // @synthesize faceAngle;
@property(retain) NSDictionary *expressionFeatures; // @synthesize expressionFeatures;
@property(readonly) _Bool hasMouthBounds;
@property(readonly) _Bool hasRightEyeBounds;
@property(readonly) _Bool hasLeftEyeBounds;
- (void)dealloc;

@end

@interface FCRFaceDetector : NSObject
{
    void *api;
    NSObject *lock;
}

+ (id)keypointTrackingDetector;
+ (id)standardTrackingDetector;
+ (id)preciseFaceDetector;
+ (id)fastFaceDetector;
+ (id)faceDetector;
+ (int)findProfileInParameters:(id)arg1;
+ (id)faceDetectorWithOptions:(id)arg1;
- (id)convertRectsToString:(id)arg1;
- (id)parseNumericOrBoolValue:(id)arg1;
- (id)parseOption:(id)arg1 value:(id)arg2;
- (void)setParam:(id)arg1 toValue:(id)arg2 withDefaultValue:(id)arg3 usingApi:(struct FaceCoreAPI *)arg4;
- (float)interpretAsFloat:(id)arg1 withDefault:(float)arg2;
- (void)createFaceCoreLightApiWithProfile:(int)arg1 parameters:(id)arg2;
- (id)createFCRImage:(struct CGImage *)arg1;
- (void)addLandmarkOfType:(id)arg1 fromMesh:(vector_88fc712c *)arg2 indexes:(id)arg3 to:(id)arg4 image:(id)arg5;
- (void)updateFCRFace:(id)arg1 from:(struct face *)arg2 image:(id)arg3;
- (id)createFCRFace:(struct face *)arg1 image:(id)arg2;
- (struct CGRect)makeYFlippedRectFromRect:(struct CGRect)arg1 image:(id)arg2;
- (struct CGPoint)makeYFlippedPointFromCoord:(struct coord *)arg1 image:(id)arg2;
- (struct coord)makeYFlippedCoordFromPoint:(struct CGPoint)arg1 image:(id)arg2;
- (struct face)createFace:(id)arg1 image:(id)arg2;
- (struct image)createImage:(id)arg1;
- (float)compareFace:(id)arg1 toFace:(id)arg2 error:(id *)arg3;
- (id)extractDetailsForFaces:(id)arg1 inCGImage:(struct CGImage *)arg2 options:(id)arg3 error:(id *)arg4;
- (id)extractDetailsForFaces:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)extractDetailsForFaces:(id)arg1 inData:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7;
- (id)detectFacesInCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)detectFacesInImage:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)updateExtractionParamsValues:(id)arg1;
- (id)parseRegionOfInterestParam:(id)arg1;
- (id)transformROIs:(id)arg1 image:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)updateDetectionParamsValues:(id)arg1 image:(id)arg2;
- (id)detectFacesInData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (id)version;
- (void)dealloc;
- (id)initWithProfile:(int)arg1 parameters:(id)arg2;
- (id)initWithOptions:(id)arg1;

@end

@interface FCRImage : NSObject
{
    unsigned long long width;
    unsigned long long height;
    unsigned long long bytesPerRow;
    char *rawDataBuffer;
    char *alignedDataBuffer;
    _Bool freeBufferWhenDone;
}

@property unsigned long long bytesPerRow; // @synthesize bytesPerRow;
@property unsigned long long height; // @synthesize height;
@property unsigned long long width; // @synthesize width;
- (void)dealloc;
- (char *)getAlignedImageData;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char *)arg4 freeBufferWhenDone:(_Bool)arg5;

@end

@interface FCRLandmark : NSObject
{
    NSString *type;
    unsigned long long pointCount;
    struct CGPoint *points;
}

+ (id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;
@property(readonly) struct CGPoint *points; // @synthesize points;
@property(readonly) unsigned long long pointCount; // @synthesize pointCount;
@property(readonly) NSString *type; // @synthesize type;
- (void)dealloc;
- (id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint *)arg3;

@end

@interface FCRImageConversionUtils : NSObject
{
}

+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 cacheContext:(_Bool)arg3;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3 cacheContext:(_Bool)arg4;
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;

@end

@interface FCRExceptionUtils : NSObject
{
}

+ (void)throwRuntimeErrorException:(id)arg1;
+ (void)throwInvalidArgumentException:(id)arg1;

@end

@interface AEVConversionUtils : NSObject
{
}

+ (struct CGImage *)createImageFromGrayscaleData:(char *)arg1 ofWidth:(int)arg2 andHeight:(int)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;

@end

