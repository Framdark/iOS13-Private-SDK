//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSArray, NSDictionary;

@interface CUINamedImageAtlas : CUINamedLookup
{
    NSDictionary *_images;
    NSArray *_renditions;
    struct __CFArray _atlasImages;
}

@property(readonly, nonatomic) BOOL completeTextureExtrusion;
@property(readonly, nonatomic) NSArray *imageNames;
- (id)imageWithName:(id)arg1;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct __CFArray images;
@property(readonly, nonatomic) CGImage image;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(NSUInteger)arg5 withSourceThemeRef:(NSUInteger)arg6;
- (BOOL)_dimension1ExistsInKeyFormatForThemeRef:(NSUInteger)arg1;
- (id)_renditionForKey:(id)arg1 inThemeRef:(NSUInteger)arg2;
- (void)dealloc;

@end

