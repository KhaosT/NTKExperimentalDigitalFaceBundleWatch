//
//  NTKExperimentalDigitalFaceView.m
//  NTKExperimentalDigitalFaceBundle
//
//  Created by Khaos Tian on 1/26/22.
//

#import "NTKExperimentalDigitalFaceView.h"
#import <objc/runtime.h>

@interface NTKExperimentalDigitalFaceView ()

@end

@implementation NTKExperimentalDigitalFaceView

- (instancetype)initWithFaceStyle:(NSUInteger)arg2 forDevice:(NSObject *)arg3 clientIdentifier:(NSObject *)arg4 {
    self = [super initWithFaceStyle:arg2 forDevice:arg3 clientIdentifier:arg4];
    
    if (self) {
        self.timeView.backgroundColor = [UIColor whiteColor];
    }
    
    return self;
}

- (NSObject *)_loadSnapshotContentViews {
    NSObject *views = [super _loadSnapshotContentViews];
    self.contentView.backgroundColor = [UIColor whiteColor];
    
    UILabel *label = [[UILabel alloc] init];
    label.text = @"Hello";
    label.textColor = [UIColor blackColor];
    
    [self.contentView addSubview:label];
    label.translatesAutoresizingMaskIntoConstraints = NO;
    
    [NSLayoutConstraint activateConstraints:@[
        [label.centerXAnchor constraintEqualToAnchor:self.contentView.centerXAnchor],
        [label.centerYAnchor constraintEqualToAnchor:self.contentView.centerYAnchor],
    ]];
    
    return views;
}

@end
