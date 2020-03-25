//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSDGLVoronoiTriangleData : NSObject
{
    NSUInteger _triangleIndexToCellIndexMappingTable;
    NSUInteger _triangleIndexToCellTriangleIndexMappingTable;
    NSUInteger _triangleIndexToCellMappingTableCount;
    NSUInteger _triangleCount;
    NSArray *_cells;
    CGRect _bounds;
}

@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(readonly, nonatomic) NSUInteger triangleCount; // @synthesize triangleCount=_triangleCount;
- (NSUInteger)triangleIndexInCellFromGlobalTriangleIndex:(NSUInteger)arg1;
- (NSUInteger)cellIndexFromTriangleIndex:(NSUInteger)arg1;
- (id)cellFromTriangleIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger cellCount;
- (void)dealloc;
- (id)initWithPoints:(NSUInteger)arg1 clippedToRect:(CGRect)arg2 percentOfCellsToSplit:(double)arg3;
- (void)p_setupDataWithPointCount:(NSUInteger)arg1 clippedToRect:(CGRect)arg2 percentOfCellsToSplit:(double)arg3;

@end

