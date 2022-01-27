//
//  NanoTimeKit.h
//  NTKExperimentalDigitalFaceBundle
//
//  Created by Khaos Tian on 1/26/22.
//

#ifndef NanoTimeKit_h
#define NanoTimeKit_h

@import UIKit;

@class NSLayoutConstraint, NSLayoutDimension;
@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension;

@interface NSLayoutAnchor<AnchorType> : NSObject <NSCopying, NSCoding>

// These methods return an inactive constraint of the form thisAnchor = otherAnchor.
- (NSLayoutConstraint *)constraintEqualToAnchor:(NSLayoutAnchor<AnchorType> *)anchor;
- (NSLayoutConstraint *)constraintGreaterThanOrEqualToAnchor:(NSLayoutAnchor<AnchorType> *)anchor;
- (NSLayoutConstraint *)constraintLessThanOrEqualToAnchor:(NSLayoutAnchor<AnchorType> *)anchor;

// These methods return an inactive constraint of the form thisAnchor = otherAnchor + constant.
- (NSLayoutConstraint *)constraintEqualToAnchor:(NSLayoutAnchor<AnchorType> *)anchor constant:(CGFloat)c;
- (NSLayoutConstraint *)constraintGreaterThanOrEqualToAnchor:(NSLayoutAnchor<AnchorType> *)anchor constant:(CGFloat)c;
- (NSLayoutConstraint *)constraintLessThanOrEqualToAnchor:(NSLayoutAnchor<AnchorType> *)anchor constant:(CGFloat)c;

@end


@interface NSLayoutXAxisAnchor : NSLayoutAnchor<NSLayoutXAxisAnchor *>
@end

@interface NSLayoutYAxisAnchor : NSLayoutAnchor<NSLayoutYAxisAnchor *>
@end

@interface NSLayoutConstraint : NSObject

+ (void)activateConstraints:(NSArray<NSLayoutConstraint *> *)constraints;

@end

@interface UIView: NSObject

@property (readwrite, nonatomic) UIColor *backgroundColor;
@property (readwrite, nonatomic) CGRect frame;
@property (readwrite, nonatomic) CGRect bounds;
@property (nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;

@property(nonatomic,readonly,strong) NSLayoutXAxisAnchor *centerXAnchor;
@property(nonatomic,readonly,strong) NSLayoutYAxisAnchor *centerYAnchor;

- (void)addSubview:(UIView *)subview;
- (void)removeFromSuperview;

@end

@interface UILabel: UIView

@property (readwrite, nonatomic) NSString *text;
@property (readwrite, nonatomic) NSTextAlignment textAlignment;
@property (readwrite, nonatomic) UIColor *textColor;
@property (readwrite, nonatomic) NSInteger numberOfLines;

@end

typedef enum : NSUInteger {
    NTKFaceStyleCustom = 0xBAD1DEA
} NTKFaceStyle;

@interface NTKFaceBundle : NSObject

+ (NSString *)identifier;

@end

@interface NTKFace : NSObject

@property (readwrite, nonatomic) BOOL isEditable;
@property (readwrite, nonatomic) NTKFaceStyle faceStyle;
@property (readwrite, nonatomic) NSString *name;

+(NTKFace *)bundledFaceWithIdentifier:(NSString *)arg2
                            forDevice:(NSObject *)arg3
                    initCustomization:(NSUInteger)arg4;

@end

@interface NTKFaceView: UIView

- (instancetype)initWithFaceStyle:(NSUInteger)arg2
                        forDevice:(NSObject *)arg3
                 clientIdentifier:(NSObject *)arg4;
- (UIView *)contentView;
- (UIView *)timeView;
- (NSObject *)_loadSnapshotContentViews;

@end

@interface NTKDigitalFaceView: NTKFaceView

@end

#endif /* NanoTimeKit_h */
