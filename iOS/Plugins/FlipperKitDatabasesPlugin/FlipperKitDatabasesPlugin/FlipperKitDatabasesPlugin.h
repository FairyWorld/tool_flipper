/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <FlipperKit/FlipperPlugin.h>
#import <Foundation/Foundation.h>

@class DatabasesManager;

@interface FlipperKitDatabasesPlugin : NSObject<FlipperPlugin>
@property(nonatomic, strong) DatabasesManager* databasesManager;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)sharedInstance;

@end
