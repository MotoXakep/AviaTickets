//
//  Country.h
//  AviaSales
//
//  Created by Алексей Борисов on 23.04.2018.
//  Copyright © 2018 Aleksey Borisov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Country : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *currency;
@property (nonatomic, strong) NSDictionary *translations;
@property (nonatomic, strong) NSString *code;

-(instancetype)initWithDictionary:(NSDictionary *)dictionary;


@end
