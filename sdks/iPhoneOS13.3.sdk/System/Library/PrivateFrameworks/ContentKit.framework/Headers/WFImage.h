//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSBundle, NSData, NSImage, NSString, NSURL, UIImage;

@interface WFImage : NSObject <NSCopying, NSSecureCoding>
{
    id _internalCGImage;
    id _internalImageSource;
    UIImage *_platformImage;
    BOOL _allowsAnimated;
    unsigned int _orientation;
    CGImage _CGImage;
    double _scale;
    NSImage *_NSImage;
    long long _renderingMode;
    long long _representationType;
    NSURL *_URL;
    NSData *_data;
    NSString *_name;
    NSBundle *_bundle;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)imageSizeIndicatesScreenshot:(CGSize)arg1;
+ (id)applicationIconImageForCalendarDate:(id)arg1 format:(NSUInteger)arg2;
+ (id)documentIconImageForFileType:(id)arg1;
+ (id)applicationIconImageForBundleIdentifier:(id)arg1 format:(NSUInteger)arg2;
+ (id)applicationIconImageForBundleIdentifier:(id)arg1;
+ (id)imageWithPlatformImage:(id)arg1;
+ (id)imageWithCGImage:(CGImage )arg1 scale:(double)arg2 orientation:(unsigned int)arg3;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 scale:(double)arg3;
+ (id)imageWithData:(id)arg1 scale:(double)arg2 allowAnimated:(BOOL)arg3;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithCGImage:(CGImage )arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithDeviceScreenScaleImageData:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
@property(readonly, nonatomic) BOOL allowsAnimated; // @synthesize allowsAnimated=_allowsAnimated;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long representationType; // @synthesize representationType=_representationType;
@property(nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(readonly, nonatomic) NSImage *NSImage; // @synthesize NSImage=_NSImage;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
// - (void).cxx_destruct;
- (CGAffineTransform)contentsTransformForDrawingWithSize:(CGSize)arg1 scale:(double)arg2;
@property(readonly, nonatomic) CGImage internalCGImage;
@property(readonly, nonatomic) CGImageSource internalImageSource;
- (BOOL)hasValidImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) UIImage *UIImage;
@property(readonly, nonatomic) UIImage *platformImage;
- (void)drawInContext:(id)arg1 inRect:(CGRect)arg2 blendMode:(int)arg3 alpha:(double)arg4;
@property(readonly, nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) CGImage CGImage; // @synthesize CGImage=_CGImage;
@property(readonly, nonatomic) CGSize sizeInPoints;
@property(readonly, nonatomic) CGSize sizeInPixels;
@property(readonly, nonatomic) CGSize CGImageSize;
- (id)initWithPlatformImage:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 scale:(double)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2 allowAnimated:(BOOL)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;
- (id)initWithCGImage:(CGImage )arg1 scale:(double)arg2 orientation:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithRepresentationType:(long long)arg1;
@property(readonly, nonatomic) NSData *PNGRepresentation;
- (CGImage )createNonRotatedCGImageRepresentation;
@property(readonly, nonatomic) BOOL isScreenshot;
- (id)tintedImageWithColor:(id)arg1;
- (id)applicationIconImageWithFormat:(NSUInteger)arg1;
- (void)drawInContext:(id)arg1 inRect:(CGRect)arg2;

@end

