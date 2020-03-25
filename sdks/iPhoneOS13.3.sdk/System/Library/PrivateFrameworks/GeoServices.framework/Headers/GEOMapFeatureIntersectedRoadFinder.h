//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder
{
    GEOTileLoader *_tileLoader;
}

// - (void).cxx_destruct;
- (void)_tilesAdjacentToTile:(struct _GEOTileKey)arg1 atPoint:(CDStruct_6e3f967a)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(NSUInteger)arg2 roadToIgnore:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(NSUInteger)arg2 handler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(NSUInteger)arg2 handler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(NSUInteger)arg2 handler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)initWithTileLoader:(id)arg1;

@end

