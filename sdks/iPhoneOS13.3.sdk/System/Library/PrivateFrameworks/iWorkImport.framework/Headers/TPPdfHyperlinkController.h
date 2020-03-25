//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSAPdfHyperlinkController.h>

__attribute__((visibility("hidden")))
@interface TPPdfHyperlinkController : TSAPdfHyperlinkController
{
    CGRect mCanvasRect;
}

+ (id)URLWithDestinationName:(id)arg1;
+ (id)destinationFromSectionURL:(id)arg1;
+ (id)footnoteMarkNameForIndex:(NSUInteger)arg1;
+ (id)footnoteRefNameForIndex:(NSUInteger)arg1;
- (id)destinationFromUrl:(id)arg1;
- (BOOL)isDestination:(id)arg1;
- (BOOL)ignoreUrl:(id)arg1;
- (void)setCanvasRect:(CGRect)arg1;
- (CGRect)canvasRect;
- (id)initWithDocumentRoot:(id)arg1;

@end
