# Generated by Django 3.0.6 on 2020-05-18 02:47

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('users', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='profile',
            name='ip_address',
            field=models.CharField(blank=True, max_length=30),
        ),
    ]
