//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DGeometry, TSCH3DTexCoordGeneration;

__attribute__((visibility("hidden")))
@interface TSCH3DMeshData : NSObject
{
    TSCH3DGeometry *_geometry;
    TSCH3DTexCoordGeneration *_texcoordGenerator;
}

+ (id)dataWithGeometry:(id)arg1 texcoordGenerator:(id)arg2;
@property(readonly, retain, nonatomic) TSCH3DTexCoordGeneration *texcoordGenerator; // @synthesize texcoordGenerator=_texcoordGenerator;
@property(readonly, retain, nonatomic) TSCH3DGeometry *geometry; // @synthesize geometry=_geometry;
- (void)dealloc;
- (id)initWithGeometry:(id)arg1 texcoordGenerator:(id)arg2;

@end

