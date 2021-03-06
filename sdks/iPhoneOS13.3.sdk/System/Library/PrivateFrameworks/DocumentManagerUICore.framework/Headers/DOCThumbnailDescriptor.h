//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCThumbnailDescriptor : NSObject
{
    BOOL _folded;
    BOOL _interactive;
    double _minimumSize;
    double _scale;
    NSUInteger _style;
    CGSize _size;
}

@property(readonly, nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic, getter=isFolded) BOOL folded; // @synthesize folded=_folded;
@property(readonly, nonatomic) NSUInteger style; // @synthesize style=_style;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithScale:(double)arg1 style:(NSUInteger)arg2 isFolded:(BOOL)arg3 isInteractive:(BOOL)arg4;
- (id)initWithSize:(CGSize)arg1 scale:(double)arg2 style:(NSUInteger)arg3 isFolded:(BOOL)arg4 isInteractive:(BOOL)arg5;
- (id)initWithSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 style:(NSUInteger)arg4 isFolded:(BOOL)arg5 isInteractive:(BOOL)arg6;

@end

