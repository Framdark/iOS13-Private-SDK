//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PKController, PKTiledCanvasView, UIGestureRecognizer, UIView;
@protocol PKDrawingGestureRecognizerProtocol;

@protocol PKRulerDelegate
- (UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *)drawingGestureRecognizer;
- (double)drawingScale;
- (void)setRulerEnabled:(_Bool)arg1;
- (struct CGAffineTransform)strokeTransform;
- (PKController *)drawingController;
- (UIView *)topView;
- (_Bool)isDrawing;

@optional
- (PKTiledCanvasView *)canvasView;
@end
