//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVShape : NSObject
{
}

+ (id)readFromShape:(struct _xmlNode )arg1 inNamespace:(id)arg2 state:(id)arg3;
+ (void)readBoundsAndGeometryOfPolylineFromManager:(id)arg1 toShape:(id)arg2 state:(id)arg3;
+ (id)managerWithShape:(struct _xmlNode )arg1 state:(id)arg2;
+ (unsigned short)typeWithShape:(struct _xmlNode )arg1 state:(id)arg2;

@end
